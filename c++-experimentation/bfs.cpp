#include <iostream>
#include <queue>
#include <vector>
#include <set>

using namespace std;

void bfs(vector<vector<int>>& graph, int start) {
    set<int> visited;
    queue<int> q;
    
    q.push(start);
    visited.insert(start);
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        
        for (int neighbor : graph[node]) {
            if (visited.find(neighbor) == visited.end()) {
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }
}


int main() {
    // Create a graph as an adjacency list
    vector<vector<int>> graph = {
        {1, 2},   // Neighbors of node 0
        {0, 3, 4},// Neighbors of node 1
        {0, 4},   // Neighbors of node 2
        {1, 5},   // Neighbors of node 3
        {1, 2, 5},// Neighbors of node 4
        {3, 4}    // Neighbors of node 5
    };

    // Call the BFS function starting from node 0
    cout << "BFS starting from node 0: ";
    bfs(graph, 0);
    
    cout << endl;

    return 0;
}