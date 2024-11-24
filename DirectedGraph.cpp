#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge between two vertices
void addEdge(vector<vector<int>>& adj, int u, int v) {
    //1 way path, no reverse direction. 
    adj[u].push_back(v);
}

void displayAdjList(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": "; 
        for (int j : adj[i]) {
            cout << j << " "; 
        }
        cout << endl; 
    }
}

int main() {
  
    // Create a graph with 3 vertices and 3 edges
    int V = 3;
    vector<vector<int>> adj(V); 

    // Now add edges one by one
    addEdge(adj, 1, 0);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);

    cout << "Adjacency List Representation:" << endl;
    displayAdjList(adj);

    return 0;
}