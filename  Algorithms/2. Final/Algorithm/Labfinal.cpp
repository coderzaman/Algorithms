/*Krushkal MST*/

// #include<bits/stdc++.h>
// using namespace std;

// typedef pair<int, int> iPair;

// struct  Graph
// {
// 	int U, V;
// 	vector<pair<int, iPair>> edges;

// 	Graph(int u, int v) : U(u), V(v){};

// 	void addEdge(int u, int v, int w){
// 		edges.push_back({w,{u,v}});
// 	}

// 	int kruskalMst();

// };

// struct DisjoinSet
// {
// 	int n; 
// 	int * parent;
// 	DisjoinSet(int n){
// 		this->n = n;
// 		parent = new int[n+1];

// 		for(int i = 1 ; i <= n; i++){
// 			parent[i] = i;
// 		}
// 	}

// 	int find(int u){
// 		if(parent[u] == u){
// 			return u;
// 		}else{
// 			return find(parent[u]);
// 		}
// 	}

// 	void Merge(int u, int v){
// 		int p = find(u);
// 		int q = find(v);

// 		if(p != q){
// 			parent[q] = p;
// 		}
// 	}

// };

// int Graph::kruskalMst(){
// 	int mst_wt = 0;
// 	DisjoinSet dj(V);

// 	sort(edges.begin(), edges.end());
// 	vector<pair<int, iPair>> :: iterator it;

// 	for(it = edges.begin(); it != edges.end(); it++){
// 		int u = it->second.first;
// 		int v = it->second.second;

// 		int set_u = dj.find(u);
// 		int set_v = dj.find(v);

// 		if(set_u != set_v){
// 			cout << u  << " - " << v << endl;
// 			mst_wt += it->first;
// 			dj.Merge(set_u, set_v);
// 		}
// 	}

// 	return mst_wt;
// }
// int main(){
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
	
	
	
// 	// int V = 4, E = 4;
// 	// Graph g(V, E);
// 	// g.addEdge(2, 4, 5);
// 	// g.addEdge(1, 2 ,1);
// 	// g.addEdge(1, 3, 7);
// 	// g.addEdge(3, 4, 2);

// 	cout << "Edges of MST are \n";
// 	int mst_wt = g.kruskalMst();

// 	cout << "\nWeight of MST is " << mst_wt;

// 	return 0;
// }


/*Dijkstra*/


// #include<bits/stdc++.h>
// using namespace std;


// struct node
// {
// 	int val;
// 	int cost;
// };


// #define MX 100
// #define INF 10000000

// vector<node> G[MX];

// int dist[MX];
// bool vis[MX];

// void reset(){
// 	for(int i = 0; i < MX; i++){
// 		G[i].clear();
// 		dist[i] = INF;
// 		vis[i] = 0;
// 	}
// }

// class cmp{
// 	public:
// 	bool operator()(node const& a, node const& b){
// 		if(a.cost > b.cost){
// 			return true;
// 		}else{
// 			return false;
// 		}
// 	}
// };


// void disjkstra(int source){
// 	priority_queue<node, vector<node>, cmp> PQ;
// 	PQ.push({source, 0});
	
// 	while(PQ.size()){
// 		node current = PQ.top();
// 		PQ.pop();

// 		int cost = current.cost;
// 		int val = current.val;

// 		if(vis[val] == 1) continue;

// 		dist[val] = cost;
// 		vis[val] = 1;
		
// 		for(int i = 0; i < G[val].size(); i++){
// 			int nxt = G[val][i].val;
// 			int nxtCost = G[val][i].cost;

// 			if(vis[nxt] == 0){
// 				PQ.push({nxt, cost + nxtCost});
// 			}
// 		}

// 	}
// }

// int main(){
// 	reset();
// 	int V, E;
// 	cout << "Ennter no. of Vertices and Edges: ";
// 	cin >> V >> E;
	
// 	cout << endl << "u, v and cost: " << endl;
// 	for(int i = 1; i <= E; i++){
// 		int u, v, w;
// 		cin >> u >> v >> w;
// 		G[u].push_back({v,w});
// 	}

// 	cout << endl << "Enter Your Source Node: " ;
// 	int source;
// 	cin >> source;
//     disjkstra(source);
// 	for(int i = 1; i <= V; i++){
// 		cout << source <<  " --> " << i;
// 		if(vis[i] == INF){
// 			cout << "inf" << endl;
// 		}else{
// 			cout << ": " << dist[i] << endl;
// 		}
// 	}
// }


// 1 6 11
// 1 2 2
// 1 3 5
// 2 4 15
// 2 5 13
// 3 2 8
// 3 5 12
// 5 4 1
// 6 4 17




// Floyd-Warshall


// #include <bits/stdc++.h>
// using namespace std;

// #define V 4
// #define INF 99999
// void printSolution(int dist[V][V]);

// void floydWarshall(int dist[V][V])
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

// void printSolution(int dist[V][V])
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

// int main(){
// 	int graph[V][V];

// 	for(int i = 0; i < V; i++){
// 		for (int j = 0; j < V; j++)
// 		{
// 			cout << "Graph[" << i + 1 << "][" << j+1 <<"]: " ;
// 			cin >> graph[i][j];
// 			if(graph[i][j] == -1){
// 				graph[i][j] = INF;
// 			}
// 		}
		
// 	}

// 	floydWarshall(graph);
// 	return 0;
// }



//LCS FINALIZE

// #include<bits/stdc++.h>
// using namespace std; 

// string LCS(string S1, string S2, int m, int n){
// 	int lcTab[m+1][n+1];

// 	for(int i = 0; i <= m; i++){
// 		for(int j = 0; j <= n; j++){
// 			if(i == 0 || j == 0){
// 				lcTab[i][j] = 0;
// 				cout << lcTab[i][j] << " ";
// 			}else if(S1[i-1] == S2[j-1]){
// 				lcTab[i][j] = 1 + lcTab[i-1][j-1];
// 				cout << lcTab[i][j] << " ";
// 			}else{
// 				lcTab[i][j] = max(lcTab[i-1][j], lcTab[i][j-1]);
// 				cout << lcTab[i][j] << " ";
// 			}
// 		}
// 		cout << "\n";
// 	}

// 	int index = lcTab[m][n];
// 	string lcs(index, ' ');

// 	int i = m;
// 	int j = n;

// 	while (i > 0 && j > 0)
// 	{
// 		if(S1[i-1] == S2[j-1]){
// 			lcs[index-1] = S1[i-1];
// 			i--;
// 			index--;
// 			j--;
// 		}else if(lcTab[i-1][j] > lcTab[i][j-1]){
// 			i--;
// 		}else{
// 			j--;
// 		}
// 	}
	

// 	return lcs;
// }

// int main(){
// 	string s1, s2;
// 	s1 = "president";
// 	s2 = "providence";

// 	int m = s1.length();
// 	int n = s1.length();

// 	cout << LCS(s1, s2, m,n);
// }


//0/1 kanpsack
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int item;
//     int bageSize;

//     cout << "Please enter No. of items: " ;
//     cin >> item;

//     cout << "Please Enter Maximum capacity of Bag: ";
//     cin >> bageSize;

//     int weight[item + 1];
//     int profit[item + 1];


//     cout << "Please Weight and item for each item: " << endl;
//     for(int i = 1; i <= item; i++){
//         cin >> weight[i] >> profit[i]; 
//     }

//     int k[item + 1][bageSize + 1];

//     for(int i = 0; i <= item; i++){
//         for(int j = 0; j <= bageSize; j++){
//             if(i == 0 || j == 0){
//                 k[i][j] = 0;
//                 cout <<  k[i][j] << " ";
//             }else if(weight[i] <= j){
//                 k[i][j] = max(profit[i] + k[i-1][j-weight[i]], k[i-1][j]);
//                 cout <<  k[i][j] << " ";
//             }else{
//                 k[i][j] = k[i-1][j];
//                 cout <<  k[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }


//     int i = item;
//     int j =  bageSize;

//     while (i > 0 && j > 0)
//     {
//         if(k[i][j] == k[i-1][j]){
//             cout << i << ": 0" << endl;
//             i--;
//         }else{
//             cout << i << ": 1" << endl;
//             j -= weight[i];
//             i--;
//         }
//     }
// }

//Insertion Sort

// #include<iostream>
// using namespace std;

// void insertionSort(int *A, int n){
//     for(int i = 0; i <n; i++){
//         int key = A[i];
//         int j  = i-1;

//         while (j >= 0 && A[j] <= key)
//         {
//             A[j+1] = A[j];
//             j--;
//         }

//         A[j+1] = key;

//     }
// }

// int main(){
//     int arr[] = {34,43,432,3,5,32,2,6,4};
//     int n = sizeof(arr)/sizeof(arr[0]);


//     insertionSort(arr, n);

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }


//Qucik Sort
// #include<iostream>
// using namespace std;
// int Quick(int arr[], int start, int end){
//     int pivot = arr[end];
//     int pIndex = start;
//     int i = start;

//     for(; i < end; i++){
//         if(arr[i] <= pivot){
//             swap(arr[i], arr[pIndex]);
//             pIndex++;
//         }
//     }
//     swap(arr[end], arr[pIndex]);
//     return pIndex;
// }

// void QuickSort(int arr[], int start, int end){
//     if (start < end)
//     {
//         int pIndex = Quick(arr, start, end);
//         QuickSort(arr,start, pIndex-1);
//         QuickSort(arr, pIndex+1, end);
//     }
    
// }

// int main(){
//     int arr[] = {34,43,432,3,5,32,2,6,4};
//     int n = sizeof(arr)/sizeof(arr[0]);


//     QuickSort(arr, 0, n-1);

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }



//Merge Sort

// #include<bits/stdc++.h>
// using namespace std;

// void Merge(int * A, int left, int mid, int right){
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for(int i = 0; i < n1; i++){
//         L[i] = A[i + left];
//     }

//     for(int i = 0; i < n2; i++){
//         R[i] = A[mid + 1 + i];
//     }

//     int i = 0, j = 0, k = left;

//     while(i < n1 && j < n2){
//         if(L[i] <= R[j]){
//             A[k] = L[i];
//             i++;
//         }else{
//             A[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while(i < n1){
//          A[k] = L[i];
//          i++;
//          k++;
//     }

//     while(j < n2){
//          A[k] = R[j];
//          j++;
//          k++;
//     }

// }


// void MergeSort(int * A, int start, int end){
//     if(start < end){
//         int mid = (start + end)/2;
//         MergeSort(A, start, mid);
//         MergeSort(A, mid + 1, end);
//         Merge(A, start, mid, end);
//     }
// }

// void print(int * A, int len){
//     for(int i = 0; i < len; i++){
//         cout << A[i] << " ";
//     }

//     cout << endl;
// }
// int main(){
//     int arr[10] = {23,3,23,3,21,1,3,42,4,315};
//     int len = sizeof(arr)/sizeof(int);
//     print(arr, len);
//     MergeSort(arr, 0, len-1);
//     print(arr, len);
// }


//knapsack greedy
// C++ program to solve fractional Knapsack Problem
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Item {
//     int profit, weight;

//     Item(int weight, int profit) {
//         this->profit = profit;
//         this->weight = weight;
//     }
// };

// static bool cmp(Item a, Item b) {
//     double r1 = (double)a.profit / (double)a.weight;
//     double r2 = (double)b.profit / (double)b.weight;
//     return r1 > r2;
// }


// double fractionalKnapsack(int W, vector<Item>& items) {
//     // Sorting items based on ratio
//     sort(items.begin(), items.end(), cmp);

//     double finalvalue = 0.0;

//     // Looping through all items
//     for (int i = 0; i < items.size(); i++) {
//         // If adding item won't overflow, add it completely
//         if (items[i].weight <= W) {
//             W -= items[i].weight;
//             finalvalue += items[i].profit;
//         }
//         // If we can't add the current item, add a fractional part of it
//         else {
//             finalvalue += items[i].profit * ((double)W / (double)items[i].weight);
//             break;
//         }
//     }

//     // Returning the final value
//     return finalvalue;
// }

// int main() {
//     int W;
//     cout << "Enter the maximum weight capacity (W): ";
//     cin >> W;

//     int N;
//     cout << "Enter the number of items (N): ";
//     cin >> N;

//     vector<Item> items;
//     cout << "Enter the profit and weight for each item:\n";
//     for (int i = 0; i < N; i++) {
//         int profit, weight;
//         cout << "Item " << i + 1 << ":\n";
//         cout << "Weight: ";
//         cin >> weight;
//         cout << "Profit: ";
//         cin >> profit;
//         items.push_back(Item(weight, profit));
//     }

//     // Function call
//     cout << fractionalKnapsack(W, items);

//     return 0;
// }



//prims algorithm
// STL implementation of Prim's algorithm for MST
// #include<bits/stdc++.h>
// using namespace std;
// # define INF 0x3f3f3f3f

// // iPair ==> Integer Pair
// typedef pair<int, int> iPair;

// // This class represents a directed graph using
// // adjacency list representation
// class Graph
// {
// 	int V; // No. of vertices

// 	// In a weighted graph, we need to store vertex
// 	// and weight pair for every edge
// 	list< pair<int, int> > *adj;

// public:
// 	Graph(int V); // Constructor

// 	// function to add an edge to graph
// 	void addEdge(int u, int v, int w);

// 	// Print MST using Prim's algorithm
// 	void primMST();
// };

// // Allocates memory for adjacency list
// Graph::Graph(int V)
// {
// 	this->V = V;
// 	adj = new list<iPair> [V];
// }

// void Graph::addEdge(int u, int v, int w)
// {
// 	adj[u].push_back(make_pair(v, w));
// 	adj[v].push_back(make_pair(u, w));
// }

// // Prints shortest paths from src to all other vertices
// void Graph::primMST()
// {
// 	// Create a priority queue to store vertices that
// 	// are being primMST. This is weird syntax in C++.
// 	// Refer below link for details of this syntax
// 	// https://www.geeksforgeeks.org/implement-min-heap-using-stl/
// 	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

// 	int src = 0; // Taking vertex 0 as source

// 	// Create a vector for keys and initialize all
// 	// keys as infinite (INF)
// 	vector<int> key(V, INF);

// 	// To store parent array which in turn store MST
// 	vector<int> parent(V, -1);

// 	// To keep track of vertices included in MST
// 	vector<bool> inMST(V, false);

// 	// Insert source itself in priority queue and initialize
// 	// its key as 0.
// 	pq.push(make_pair(0, src));
// 	key[src] = 0;

// 	/* Looping till priority queue becomes empty */
// 	while (!pq.empty())
// 	{
// 		// The first vertex in pair is the minimum key
// 		// vertex, extract it from priority queue.
// 		// vertex label is stored in second of pair (it
// 		// has to be done this way to keep the vertices
// 		// sorted key (key must be first item
// 		// in pair)
// 		int u = pq.top().second;
// 		pq.pop();
		
// 		//Different key values for same vertex may exist in the priority queue.
// 		//The one with the least key value is always processed first.
// 		//Therefore, ignore the rest.
// 		if(inMST[u] == true){
// 			continue;
// 		}
	
// 		inMST[u] = true; // Include vertex in MST

// 		// 'i' is used to get all adjacent vertices of a vertex
// 		list< pair<int, int> >::iterator i;
// 		for (i = adj[u].begin(); i != adj[u].end(); ++i)
// 		{
// 			// Get vertex label and weight of current adjacent
// 			// of u.
// 			int v = (*i).first;
// 			int weight = (*i).second;

// 			// If v is not in MST and weight of (u,v) is smaller
// 			// than current key of v
// 			if (inMST[v] == false && key[v] > weight)
// 			{
// 				// Updating key of v
// 				key[v] = weight;
// 				pq.push(make_pair(key[v], v));
// 				parent[v] = u;
// 			}
// 		}
// 	}

// 	// Print edges of MST using parent array
// 	for (int i = 1; i < V; ++i)
// 		printf("%d - %d\n", parent[i], i);
// }

// // Driver program to test methods of graph class
// int main()
// {
// 	// create the graph given in above figure
// 	int V = 9;
// 	Graph g(V);

// 	// making above shown graph
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

// 	g.primMST();

// 	return 0;
// }
