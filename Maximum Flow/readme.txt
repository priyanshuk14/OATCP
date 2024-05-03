Algorithm:

    1. Create a Residual Graph:
        Initialize a residual graph rGraph with the same capacities as the original graph. This graph will hold the remaining capacity in each edge after some flow has been sent.

    2. Define BFS Function (To Find Augmenting Paths):
        Start at the source s and search for a path to the sink t.
        Return true if such a path is found, along with the path itself.

    3. Inside BFS Function:
        Start from the source node s and explore the graph using a breadth-first search (BFS).
        Enqueue s into a queue to begin BFS.
        Mark s as visited and set its parent to -1 (no parent).
        While the queue is not empty:
            Dequeue a node u.
            For each neighboring node v of u:
                If v is not visited and there is remaining capacity from u to v:
                    If v is the sink node, return true, indicating an augmenting path is found.
                    Otherwise, enqueue v, mark it as visited, and set its parent as u.

    4. Ford-Fulkerson Main Function:
        Start with the maximum flow max_flow as 0.
        While there exists an augmenting path from s to t:
            Find the minimum residual capacity along the path (called path_flow).
            Update the residual capacities in the residual graph:
                Subtract path_flow from edges along the path.
                Add path_flow to reverse edges along the path (if any).
            Add path_flow to the maximum flow.
            
    5. Main Function:
        Define the flow network, including its capacities and the source and sink nodes.
        Compute the maximum flow using the Ford-Fulkerson algorithm.
        Print the maximum flow.