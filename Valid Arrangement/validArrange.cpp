#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> adj;
unordered_map<int, int> indeg, outdeg;

void build_graph(vector<vector<int>>& pairs) {
    for(auto& edge: pairs) {
        int start = edge[0], end = edge[1];
        adj[start].push_back(end);
        outdeg[start]++;
        indeg[end]++;
    }
}

vector<int> rpath;

void dfs(int i) {
    while(!adj[i].empty()) {
        int j = adj[i].back();
        adj[i].pop_back();
        dfs(j);
    }
    rpath.push_back(i); 
}

vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
    int e = pairs.size();
    build_graph(pairs);
    int i0 = outdeg.begin()->first;
    for (auto it = outdeg.begin(); it != outdeg.end(); ++it) {
        int v = it->first, deg = it->second;
        if (deg == indeg[v] + 1) { 
            i0 = v;
            break;
        } 
    }
    dfs(i0);

    vector<vector<int>> ans;
    ans.reserve(e);

    for (int i = rpath.size() - 2; i >= 0; i--) 
        ans.push_back({rpath[i + 1], rpath[i]});

    return ans;
}

int main(){
    int numPairs;
    cin >> numPairs;

    vector<vector<int>> pairs(numPairs, vector<int>(2));
    for (int i = 0; i < numPairs; ++i) {
        cin >> pairs[i][0] >> pairs[i][1];
    }

    vector<vector<int>> result = validArrangement(pairs);
    
    for (auto& pair : result)
        cout << pair[0] << " " << pair[1] << endl;

    return 0;
}