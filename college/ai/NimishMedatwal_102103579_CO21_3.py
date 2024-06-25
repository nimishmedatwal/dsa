import copy

# block world depth limited search implementation

visited_nodes = []
frontier_nodes = []
depth_limit = 1


def add_to_frontier(state):
    frontier_nodes.append(state)


def remove_from_frontier():
    state = frontier_nodes[-1]
    del frontier_nodes[-1]
    return state


def is_goal_reached(state, goal_state):
    for i in range(len(state)):
        if state[i] not in goal_state:
            return False
    return True


def generate_child_states(state, goal_state, depth):
    visited_nodes.append(state)
    level = state[0]
    blocks = state[1]
    if level == depth:
        return
    for i in range(len(blocks)):
        parent = copy.deepcopy(blocks)
        if parent[i]:
            block = parent[i][-1]
            del parent[i][-1]
            for j in range(len(parent)):
                if j != i:
                    child_state = copy.deepcopy(parent)
                    child_state[j].append(block)
                    if is_goal_reached(child_state, goal_state):
                        print("Goal state reached!")
                        print(len(visited_nodes))
                        exit(0)
                    flag = 1
                    for visited_state in visited_nodes:
                        if is_goal_reached(visited_state, child_state):
                            flag = 0
                    for frontier_state in frontier_nodes:
                        if is_goal_reached(frontier_state, child_state):
                            flag = 0
                    if flag:
                        add_to_frontier([level + 1, child_state])


def depth_limited_search(start_state, goal_state, depth):
    state = copy.deepcopy(start_state)
    state = [0, state]
    while 1:
        generate_child_states(state, goal_state, depth)
        if len(frontier_nodes) == 0:
            return print("Goal not found!")
        state = remove_from_frontier()


def main():
    global visited_nodes
    start_state = [['A'], ['B', 'C'], []]
    goal_state = [['A', 'B', 'C'], [], []]
    depth_limited_search(start_state, goal_state, depth_limit)
    len_before = len(visited_nodes)
    visited_nodes = []
    depth_limited_search(start_state, goal_state, depth_limit + 1)
    len_after = len(visited_nodes)
    if len_after > len_before:
        print('Depth limited search with depth', depth_limit, 'is not complete')


main()
