# Import any libraries required
import random


# The main path planning function. Additional functions, classes, 
# variables, libraries, etc. can be added to the file, but this
# function must always be defined with these arguments and must 
# return an array ('list') of coordinates (col,row).
#DO NOT EDIT THIS FUNCTION DECLARATION
def do_a_star(grid, start, end, display_message):
    #EDIT ANYTHING BELOW HERE

    if start is None or end is None:
        return []   
    
    # Get size
    COL = len(grid)
    ROW = len(grid[0])

    # Starting point or end point is an obstacle, no path
    if grid[start[0]][start[1]] == 0:
        return []
    if grid[end[0]][end[1]] == 0:
        return []
    if start == end:
        return [start]  


    # Data structure and Initialize 
    open_list = []       # nodes to explore
    closed_list = []     # explored nodes

    parent = {}          # parent dictionary for path reconstruction
    g_cost = {}          # cost from start to node

    open_list.append(start)
    g_cost[start] = 0
    parent[start] = None

    # Main loop
    while len(open_list) > 0:

        # Select node with lowest f(n)
        current = find_lowest_f(open_list, g_cost, end)

        # If goal reached then get path
        if current == end:
            display_message("Goal reached", "DEBUG")
            return get_path(parent, end)

        open_list.remove(current)
        closed_list.append(current)

        # Explore neighbours
        neighbours = get_neighbours(current, grid)

        for neighbour in neighbours:
            if neighbour in closed_list:
                continue
            # tentative_g represents new g(n): cost from start to this neighbour
            tentative_g = g_cost[current] + 1  # cost per move = 1

            if neighbour not in open_list:
                open_list.append(neighbour)

            # Better path
            if neighbour not in g_cost or tentative_g < g_cost[neighbour]:
                parent[neighbour] = current
                g_cost[neighbour] = tentative_g

    # No path
    display_message("No path found", "DEBUG")
    return []


def get_neighbours(node, grid):   
    """
    The motion model must only allow four directions of movement
    """
    neighbours = []
    directions = [(1,0), (-1,0), (0,1), (0,-1)]

    COL = len(grid)
    ROW = len(grid[0])

    for dx, dy in directions:
        x = node[0] + dx
        y = node[1] + dy

        # Within area
        if 0 <= x < COL and 0 <= y < ROW:
            # Only add free cells
            if grid[x][y] == 1:
                neighbours.append((x, y))

    return neighbours


def heuristic(a, b):
    """
    Calculates the Euclidean distance between two nodes.
    Used as the h(n) heuristic function for the A* algorithm, 
    according to the coursework specification.
    """
    return ((a[0] - b[0])**2 + (a[1] - b[1])**2) ** 0.5


def find_lowest_f(open_list, g_cost, end):
    """
    Searches the open_list to find the node with the lowest total cost_f.
    
    In A* algorithm, f(n) = g(n) + h(n), where:
    - g(n) is the exact path cost from the start node to node n.
    - h(n) is the heuristic estimated cost from node n to the goal.
    
    This function ensures the algorithm always expands the most promising node first.
    """
    best_node = None
    best_f = float('inf')

    for node in open_list:
        h = heuristic(node, end)
        g = g_cost[node]
        f = g + h

        if f < best_f:
            best_f = f
            best_node = node

    return best_node


def get_path(parent, end):

    path = []
    current = end

    while current is not None:
        path.append(current)
        current = parent[current]

    path.reverse()
    return path
