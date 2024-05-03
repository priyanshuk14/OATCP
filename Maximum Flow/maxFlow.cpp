#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int>>& rGraph, int s, int t, vector<int>& parent) {
    int V = rGraph.size();

    vector<bool> visited(V, false);

    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 0; v < V; v++) {
            if (!visited[v] && rGraph[u][v] > 0) {

                if (v == t) {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return false;
}

int fordFulkerson(vector<vector<int>>& graph, int s, int t) {
    int V = graph.size();

    vector<vector<int>> rGraph(V, vector<int>(V, 0));
    for (int u = 0; u < V; u++)
        for (int v = 0; v < V; v++)
            rGraph[u][v] = graph[u][v];

    vector<int> parent(V);

    int max_flow = 0;  

    while (bfs(rGraph, s, t, parent)) {
        int path_flow = INT_MAX;
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }

        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;
}

int main() {
    int numNodes = 6;

    int source = 1; 
    int dest = 6; 

    vector<vector<int>> graph(numNodes, vector<int>(numNodes, 0));

    graph[0][1] = 5; 
    graph[0][3] = 4; 
    graph[1][2] = 6; 
    graph[3][1] = 3; 
    graph[3][4] = 1; 
    graph[2][4] = 8; 
    graph[2][5] = 5; 
    graph[4][5] = 2; 

    cout << fordFulkerson(graph, source - 1, dest - 1);

    return 0;
}
