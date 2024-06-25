import copy

visited_states = []
reached_states = []

def add_state_to_queue(state):
    reached_states.append(state)

def get_state_from_queue():
    state = reached_states[-1]
    del reached_states[-1]
    return state

def compare_states(s, goal):
    for i in range(len(s)):
        if s[i] not in goal:
            return False
    return True

def generate_child_states(s, goal, depth):
    visited_states.append(s)
    level = s[0]
    element = s[1]
    if level == depth:
        return
    for i in range(len(element)):
        parent = copy.deepcopy(element)
        if parent[i]:
            block = parent[i][-1]
            del parent[i][-1]
            for j in range(len(parent)):
                if j != i:
                    state = copy.deepcopy(parent)
                    state[j].append(block)
                    if compare_states(state, goal):
                        print("Goal reached at level", level + 1)
                        print(len(visited_states))
                        exit(0)
                    flag = 1
                    for elem in visited_states:
                        if compare_states(elem, state):
                            flag = 0
                    for elem in reached_states:
                        if compare_states(elem, state):
                            flag = 0
                    if flag:
                        add_state_to_queue([level + 1, state])

def depth_limited_search(start_state, goal_state, depth):
    state = copy.deepcopy(start_state)
    state = [0, state]
    while 1:
        generate_child_states(state, goal_state, depth)
        if len(reached_states) == 0:
            return print("Goal not found!")
        state = get_state_from_queue()

def main():
    global visited_states, reached_states
    start_state = [['A'], ['B', 'C'], []]
    goal_state = [['A', 'B', 'C'], [], []]
    i = 1
    while 1:
        depth_limited_search(start_state, goal_state, i)
        visited_states = []
        reached_states = []
        i += 1

main()
