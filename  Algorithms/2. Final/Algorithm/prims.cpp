#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

// Structure to represent an edge
struct Edge {
    int source;
    int destination;
    int weight;
};

// Function to add an edge to the adjacency list
void addEdge(vector<vector<Edge>>& adjacencyList, int source, int destination, int weight) {
    Edge edge;
    edge.source = source;
    edge.destination = destination;
    edge.weight = weight;
    adjacencyList[source].push_back(edge);

    // Undirected graph, so add the edge in reverse direction as well
    edge.source = destination;
    edge.destination = source;
    adjacencyList[destination].push_back(edge);
}

// Function to perform Prim's algorithm
void primsAlgorithm(vector<vector<Edge>>& adjacencyList, int startVertex) {
    int numVertices = adjacencyList.size();

    // Create a priority queue to store vertices and their respective minimum edge weights
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Create a vector to store minimum edge weights for each vertex
    vector<int> minEdgeWeight(numVertices, numeric_limits<int>::max());

    // Create a vector to store the parent of each vertex in the minimum spanning tree
    vector<int> parent(numVertices, -1);

    // Create a vector to track visited vertices
    vector<bool> visited(numVertices, false);

    // Initialize with the start vertex
    minEdgeWeight[startVertex] = 0;
    pq.push(make_pair(0, startVertex));

    while (!pq.empty()) {
        // Extract the vertex with the minimum edge weight
        int currentVertex = pq.top().second;
        pq.pop();

        visited[currentVertex] = true;

        // Traverse all the adjacent vertices of the current vertex
        for (const auto& edge : adjacencyList[currentVertex]) {
            int adjacentVertex = edge.destination;
            int weight = edge.weight;

            // If the adjacent vertex is not visited and the weight of the edge is smaller
            // than the minimum edge weight of the adjacent vertex, update the values
            if (!visited[adjacentVertex] && weight < minEdgeWeight[adjacentVertex]) {
                minEdgeWeight[adjacentVertex] = weight;
                parent[adjacentVertex] = currentVertex;
                pq.push(make_pair(minEdgeWeight[adjacentVertex], adjacentVertex));
            }
        }
    }

    // Print the minimum spanning tree
    cout << "Minimum Spanning Tree:" << endl;
    for (int i = 0; i < numVertices; ++i) {
        if (parent[i] != -1) {
            cout << "Edge: " << parent[i] << " - " << i << ", Weight: " << minEdgeWeight[i] << endl;
        }
    }
}

int main() {
    int numVertices = 6;
    vector<vector<Edge>> adjacencyList(numVertices);

    // Add edges to the graph
    addEdge(adjacencyList, 0, 1, 4);
    addEdge(adjacencyList, 0, 2, 3);
    addEdge(adjacencyList, 1, 2, 1);
    addEdge(adjacencyList, 1, 3, 2);
    addEdge(adjacencyList, 2, 3, 4);
    addEdge(adjacencyList, 3, 4, 2);
    addEdge(adjacencyList, 4, 5, 6);

    int startVertex = 0;

    // Run Prim's algorithm
    primsAlgorithm(adjacencyList, startVertex);

    return 0;
}
