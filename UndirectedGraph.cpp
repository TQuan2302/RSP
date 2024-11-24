#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge between two vertices
void addEdge(vector<vector<int>>& adj, int i, int j) {
    //ADD an undirected edge for each pair of node: 
    adj[i].push_back(j);
    adj[j].push_back(i); // Undirected graph
}


void displayAdjList(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": "; // Print the vertex
        for (int j : adj[i]) {
            cout << j << " "; // Print its adjacent
        }
        cout << endl; 
    }
}

// Main function
int main() {
    // Create a graph with 4 vertices and no edges
    int V = 4;
    vector<vector<int>> adj(V); 

    // Now add edges one by one
    addEdge(adj, 0, 1); //Edge between 0 and 1
    addEdge(adj, 0, 2); //Edge between 0 and 2 
    addEdge(adj, 1, 2); //Edge between 1 and 2 
    addEdge(adj, 2, 3); //Edge between 2 and 3 

    cout << "Adjacency List:" << endl;
    displayAdjList(adj);

    return 0;
}