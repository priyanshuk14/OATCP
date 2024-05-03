Algorithm:
    1. Input Number of Pairs:
        Read the number of pairs numPairs from the user.
    2. Input Pairs:
        Read numPairs pairs of integers from the user and store them in a vector of vectors pairs.
    3. Build the Graph:
        Initialize an adjacency list adj to represent the graph.
        Initialize indeg and outdeg maps to keep track of the indegree and outdegree of each node.
        For each pair in pairs:
            Extract the start and end nodes.
            Add the end node to the adjacency list of the start node.
            Increment the outdegree of the start node and the indegree of the end node.
    4. Depth-First Search (DFS):
        Define a recursive function dfs to perform depth-first search traversal.
        Start DFS from the initial node i0 which is determined based on the outdegree and indegree.
        While the adjacency list of the current node i is not empty:
            Pop the last node j from the adjacency list of i.
            Recursively call dfs with j.
        Append the current node i to the rpath vector. This effectively creates a post-order traversal.
    5. Valid Arrangement:
        Call the validArrangement function with the pairs.
        This function computes the valid arrangement of pairs by performing a DFS traversal.
        It returns a vector of vectors ans where each inner vector represents a pair in the valid arrangement.
    6. Output:
        Print the pairs in the valid arrangement.