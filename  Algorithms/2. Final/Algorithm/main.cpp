// C++ program for Kruskal's algorithm to find Minimum
// Spanning Tree of a given connected, undirected and
// weighted graph
// #include<bits/stdc++.h>
// using namespace std;

// typedef pair<int, int> iPair;


// struct Graph
// {
// 	int V, E;
// 	vector< pair<int, iPair> > edges;

// 	Graph(int V, int E)
// 	{
// 		this->V = V;
// 		this->E = E;
// 	}

// 	void addEdge(int u, int v, int w)
// 	{
// 		edges.push_back({w, {u, v}});
// 	}

	
// 	int kruskalMST();
// };

// struct DisjointSets
// {
// 	int *parent, *rnk;
// 	int n;

// 	DisjointSets(int n)
// 	{
// 		this->n = n;
// 		parent = new int[n+1];
// 		rnk = new int[n+1];

// 		for (int i = 0; i <= n; i++)
// 		{
// 			rnk[i] = 0;
// 			parent[i] = i;
// 		}
// 	}

// 	int find(int u)
// 	{

// 		if (u != parent[u])
// 			parent[u] = find(parent[u]);
// 		return parent[u];
// 	}

// 	void merge(int x, int y)
// 	{
// 		x = find(x), y = find(y);

// 		if (rnk[x] > rnk[y])
// 			parent[y] = x;
// 		else 
// 			parent[x] = y;

// 		if (rnk[x] == rnk[y])
// 			rnk[y]++;
// 	}
// };

// int Graph::kruskalMST()
// {
// 	int mst_wt = 0; 
// 	sort(edges.begin(), edges.end());


// 	DisjointSets ds(V);

// 	vector< pair<int, iPair> >::iterator it;
    
// 	for (it=edges.begin(); it!=edges.end(); it++)
// 	{
// 		cout << it->second.first << " " << it->second.second << endl;
// 		int u = it->second.first;
// 		int v = it->second.second;

// 		int set_u = ds.find(u);
// 		int set_v = ds.find(v);

// 		if (set_u != set_v)
// 		{
// 			cout << u << " - " << v << endl;
// 			mst_wt += it->first;
// 			ds.merge(set_u, set_v);
// 		}
// 	}

// 	return mst_wt;
// }
// int main()
// {
// 	int V = 9, E = 14;
// 	Graph g(V, E);
// 	g.addEdge(0, 1, 4);
// 	g.addEdge(0, 7, 8);
// 	g.addEdge(1, 2, 8);
// 	g.addEdge(1, 7, 11);
// 	g.addEdge(2, 3, 7);
// 	g.addEdge(2, 8, 2);
// 	g.addEdge(2, 5, 4);
// 	g.addEdge(3, 4, 9);
// 	g.addEdge(3, 5, 14);
// 	g.addEdge(4, 5, 10);
// 	g.addEdge(5, 6, 2);
// 	g.addEdge(6, 7, 1);
// 	g.addEdge(6, 8, 6);
// 	g.addEdge(7, 8, 7);

// 	cout << "Edges of MST are \n";
// 	int mst_wt = g.kruskalMST();

// 	cout << "\nWeight of MST is " << mst_wt;

// 	return 0;
// }


// Floyd Warshell

// 1
// //C++ Program for Floyd Warshall Algorithm
// #include <bits/stdc++.h>
// using namespace std;
// #define V 4
// #define INF 99999


// void printSolution(int dist[][V]);

// void floydWarshall(int dist[][V])
// {

// 	int i, j, k;

// 	for (k = 0; k < V; k++) {
// 		for (i = 0; i < V; i++) {
// 			for (j = 0; j < V; j++) {
// 				if (dist[i][j] > (dist[i][k] + dist[k][j])
// 					&& (dist[k][j] != INF
// 						&& dist[i][k] != INF))
// 					dist[i][j] = dist[i][k] + dist[k][j];
// 			}
// 		}
// 	}
// 	printSolution(dist);
// }

// void printSolution(int dist[][V])
// {
// 	cout << "The following matrix shows the shortest "
// 			"distances"
// 			" between every pair of vertices \n";
// 	for (int i = 0; i < V; i++) {
// 		for (int j = 0; j < V; j++) {
// 			if (dist[i][j] == INF)
// 				cout << "INF"
// 					<< " ";
// 			else
// 				cout << dist[i][j] << " ";
// 		}
// 		cout << endl;
// 	}
// }
// int main()
// {
// 	int graph[V][V] = { { 0, 5, INF, 10 },
// 						{ INF, 0, 3, INF },
// 						{ INF, INF, 0, 1 },
// 						{ INF, INF, INF, 0 } };
// 	floydWarshall(graph);
// 	return 0;
// }

// // This code is contributed by Mythri J L

//2
// Floyd-Warshall Algorithm in C++

// #include <iostream>
// using namespace std;

// // defining the number of vertices
// #define nV 4

// #define INF 999

// void printMatrix(int matrix[][nV]);

// // Implementing floyd warshall algorithm
// void floydWarshall(int graph[][nV]) {
//   int matrix[nV][nV], i, j, k;

//   for (i = 0; i < nV; i++)
//     for (j = 0; j < nV; j++)
//       matrix[i][j] = graph[i][j];

//   // Adding vertices individually
//   for (k = 0; k < nV; k++) {
//     for (i = 0; i < nV; i++) {
//       for (j = 0; j < nV; j++) {
//         if (matrix[i][k] + matrix[k][j] < matrix[i][j])
//           matrix[i][j] = matrix[i][k] + matrix[k][j];
//       }
//     }
//   }
//   printMatrix(matrix);
// }

// void printMatrix(int matrix[][nV]) {
//   for (int i = 0; i < nV; i++) {
//     for (int j = 0; j < nV; j++) {
//       if (matrix[i][j] == INF)
//         printf("%4s", "INF");
//       else
//         printf("%4d", matrix[i][j]);
//     }
//     printf("\n");
//   }
// }

// int main() {
//   int graph[nV][nV] = {{0, 3, INF, 5},
//              {2, 0, INF, 4},
//              {INF, 1, 0, INF},
//              {INF, INF, 2, 0}};
//   floydWarshall(graph);
// }

// Dijkstra algorithm c++


// #include <iostream>
// using namespace std;
// #include <limits.h>
// #define V 9
// int minDistance(int dist[], bool sptSet[])
// {
// 	int min = INT_MAX, min_index;

// 	for (int v = 0; v < V; v++)
// 		if (sptSet[v] == false && dist[v] <= min)
// 			min = dist[v], min_index = v;

// 	return min_index;
// }

// void printSolution(int dist[])
// {
// 	cout << "Vertex \t Distance from Source" << endl;
// 	for (int i = 0; i < V; i++)
// 		cout << i << " \t\t\t\t" << dist[i] << endl;
// }

// void dijkstra(int graph[V][V], int src)
// {
// 	int dist[V];

// 	bool sptSet[V]; 
// 	for (int i = 0; i < V; i++)
// 		dist[i] = INT_MAX, sptSet[i] = false;

// 	dist[src] = 0;
// 	for (int count = 0; count < V - 1; count++) {
// 		int u = minDistance(dist, sptSet);
// 		sptSet[u] = true;
// 		for (int v = 0; v < V; v++)
// 			if (!sptSet[v] && graph[u][v]
// 				&& dist[u] != INT_MAX
// 				&& dist[u] + graph[u][v] < dist[v])
// 				dist[v] = dist[u] + graph[u][v];
// 	}
// 	printSolution(dist);
// }

// int main()
// {

	
// 	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
// 						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
// 						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
// 						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
// 						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
// 						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
// 						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
// 						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
// 						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

// 	dijkstra(graph, 0);

// 	return 0;
// }

// // This code is contributed by shivanisinghss2110

//prims algorithm
// //Prim's Algorithm in C++

// #include <cstring>
// #include <iostream>
// using namespace std;

// #define INF 9999999
// #define V 5

// int G[V][V] = {
//   {0, 9, 75, 0, 0},
//   {9, 0, 95, 19, 42},
//   {75, 95, 0, 51, 66},
//   {0, 19, 51, 0, 31},
//   {0, 42, 66, 31, 0}};

// int main() {
//   int no_edge;
//   int selected[V];
//   memset(selected, false, sizeof(selected));
//   no_edge = 0;

//   selected[0] = true;

//   int x; 
//   int y;  
//   cout << "Edge"
//      << " : "
//      << "Weight";
//   cout << endl;
//   while (no_edge < V - 1) {

//     int min = INF;
//     x = 0;
//     y = 0;

//     for (int i = 0; i < V; i++) {
//       if (selected[i]) {
//         for (int j = 0; j < V; j++) {
//           if (!selected[j] && G[i][j]) {  
//             if (min > G[i][j]) {
//               min = G[i][j];
//               x = i;
//               y = j;
//             }
//           }
//         }
//       }
//     }
//     cout << x << " - " << y << " :  " << G[x][y];
//     cout << endl;
//     selected[y] = true;
//     no_edge++;
//   }

//   return 0;
// }