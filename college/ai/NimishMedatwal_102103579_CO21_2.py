import copy

visited_states = []
reached_states = []


def add_to_reached(state):
    reached_states.append(state)


def remove_from_reached():
    state = reached_states[0]
    del reached_states[0]
    return state


def compare_states(state, goal):
    for i in range(len(state)):
        if state[i] not in goal:
            return False
    return True


def generate_child_states(state, goal):
    for i in range(len(state)):
        parent_state = copy.deepcopy(state)
        if parent_state[i]:
            block = parent_state[i][-1]
            del parent_state[i][-1]
            for j in range(len(parent_state)):
                if j != i:
                    child_state = copy.deepcopy(parent_state)
                    child_state[j].append(block)
                    if compare_states(child_state, goal):
                        print("Goal reached!")
                        print(len(visited_states))
                        exit(0)
                    flag = 1
                    for visited_state in visited_states:
                        if compare_states(visited_state, child_state):
                            flag = 0
                    for reached_state in reached_states:
                        if compare_states(reached_state, child_state):
                            flag = 0
                    if flag:
                        add_to_reached(child_state)
    visited_states.append(state)


def dfs(start_state, goal_state):
    current_state = copy.deepcopy(start_state)
    while 1:
        generate_child_states(current_state, goal_state)
        if len(reached_states) == 0:
            return print("Goal not found!")
        current_state = remove_from_reached()


def main():
    start_state = [['A'], ['B', 'C'], []]
    goal_state = [['A', 'B', 'C'], [], []]
    dfs(start_state, goal_state)


main()
