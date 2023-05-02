#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS traversal
void bfs(vector<vector<int> > graph, int start) {
    vector<bool> visited(graph.size(), false); // Mark all vertices as not visited
    queue<int> q; // Create a queue for BFS

    visited[start] = true; // Mark the current node as visited and enqueue it
    q.push(start);

    while (!q.empty()) {
        int curr = q.front(); // Dequeue a vertex from queue and print it
        cout << curr << " ";
        q.pop();

        for (int i = 0; i < graph[curr].size(); i++) {
            int adj = graph[curr][i]; // Get all adjacent vertices of the dequeued vertex
            if (!visited[adj]) { // If an adjacent vertex has not been visited, mark it visited and enqueue it
                visited[adj] = true;
                q.push(adj);
            }
        }
    }
}

// Main function to test the BFS algorithm
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
    cin >> start; // Read the starting vertex for BFS traversal

    cout << "BFS traversal starting from vertex " << start << ": ";
    bfs(graph, start); // Call the BFS function
    cout << endl;

    return 0;
}

//4 4
//0 1
//0 2
//1 2
//2 3

