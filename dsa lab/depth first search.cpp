#include <iostream>
#include <vector>

using namespace std;

// Function to perform DFS traversal
void dfs(vector<vector<int> > graph, int vertex, vector<bool> &visited) {
    visited[vertex] = true; // Mark the current node as visited
    cout << vertex << " "; // Print the current node

    for (int i = 0; i < graph[vertex].size(); i++) {
        int adj = graph[vertex][i]; // Get all adjacent vertices of the current vertex
        if (!visited[adj]) { // If an adjacent vertex has not been visited, recursively call DFS on it
            dfs(graph, adj, visited);
        }
    }
}

// Main function to test the DFS algorithm
int main() {
    int V, E;
    cin >> V >> E; // Read the number of vertices and edges

    vector<vector<int> > graph(V); // Create an adjacency list to represent the graph

    int u, v;
    for (int i = 0; i < E; i++) {
        cin >> u >> v;
        graph[u].push_back(v); // Add an edge to the graph
        graph[v].push_back(u); // For undirected graph, add an edge in reverse direction too
    }

    int start;
    cin >> start; // Read the starting vertex for DFS traversal

    vector<bool> visited(V, false); // Mark all vertices as not visited
    cout << "DFS traversal starting from vertex " << start << ": ";
    dfs(graph, start, visited); // Call the DFS function
    cout << endl;

    return 0;
}
//4 4
//0 1
//0 2
//1 2
//2 3
//2

