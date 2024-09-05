// #include <bits/stdc++.h>
// using namespace std;

// typedef pair<int, int> iPair;
// struct Graph
// {
// 	int V, E;
// 	vector<pair<int, iPair>> edges;

// 	Graph(int V, int E)
// 	{
// 		this->V = V;
// 		this->E = E;
// 	}

// 	void addEdge(int u, int v, int w)
// 	{
// 		edges.push_back({w, {u, v}});
// 	}

// 	int KrushkalMST();
// };

// struct DisjointSet
// {
// 	int *parent;
// 	int n;

// 	DisjointSet(int n)
// 	{
// 		this->n = n;
// 		parent = new int[n];

// 		for (int i = 1; i <= n; i++)
// 		{
// 			parent[i] = i;
// 		}
// 	}

// 	int find(int u)
// 	{
// 		if (u == parent[u])
// 		{
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

// int Graph:: KrushkalMST(){
// 	int mst_wt = 0;
// 	sort(edges.begin(), edges.end());

// 	DisjointSet ds(V);

// 	vector<pair<int, iPair>>::iterator it;

// 	for(it = edges.begin(); it != edges.end();it++){
// 		int u = it->second.first;
// 		int v = it->second.second;

// 		int set_u = ds.find(u);
// 		int set_v = ds.find(v);

// 		if(set_u != set_v){
// 			cout << u << " - " << v << endl;
// 			mst_wt += it->first;
// 			ds.Merge(set_u, set_v);
// 		}

// 	}

// 	return mst_wt;

// }

// int main()
// {
// 	int V = 4, E = 4;
// 	Graph g(V, E);
// 	g.addEdge(2, 4, 5);
// 	g.addEdge(1, 2 ,1);
// 	g.addEdge(1, 3, 7);
// 	g.addEdge(3, 4, 2);


// 	cout << "Edges of MST are \n";
// 	int mst_wt = g.KrushkalMST();

// 	cout << "\nWeight of MST is " << mst_wt;

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// typedef pair<int, int> iPair;

// struct Graph{
// 	int U, V;
// 	vector<pair<int , iPair>> edges;

// 	Graph(int U, int V) : U(U), V(V){};

// 	void addEdge(int u, int v, int w){
// 		edges.push_back({w,{u,v}});
// 	}

// 	int krushkalMST();
// };

// struct DisjointSet{
// 	int n;
// 	int *parent;

// 	DisjointSet(int n){
// 		this->n = n;
// 		parent = new int[n+1];

// 		for(int i = 1; i <= n; i++){
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


// int Graph::krushkalMST(){
// 	int mst_wt = 0;
// 	sort(edges.begin(), edges.end());
// 	DisjointSet ds(V);
// 	vector<pair<int , iPair>>::iterator it;

// 	for(it = edges.begin(); it != edges.end(); it++){
// 		int u = it->second.first;
// 		int v = it->second.second;
		
// 		int set_u = ds.find(u);
// 		int set_v = ds.find(v);

// 		if(set_u != set_v){
// 			cout << u << " - " << v << endl;
// 			mst_wt += it->first;
// 			ds.Merge(set_u, set_v);
// 		}

// 	}

// 	return mst_wt;
// }


// int main(){
// 	// int V = 9, E = 14;
// 	// Graph g(V, E);
// 	// g.addEdge(0, 1, 4);
// 	// g.addEdge(0, 7, 8);
// 	// g.addEdge(1, 2, 8);
// 	// g.addEdge(1, 7, 11);
// 	// g.addEdge(2, 3, 7);
// 	// g.addEdge(2, 8, 2);
// 	// g.addEdge(2, 5, 4);
// 	// g.addEdge(3, 4, 9);
// 	// g.addEdge(3, 5, 14);
// 	// g.addEdge(4, 5, 10);
// 	// g.addEdge(5, 6, 2);
// 	// g.addEdge(6, 7, 1);
// 	// g.addEdge(6, 8, 6);
// 	// g.addEdge(7, 8, 7);
// 	// 	int V = 4, E = 4;
	
	
// 	int V = 4, E = 4;
// 	Graph g(V, E);
// 	g.addEdge(2, 4, 5);
// 	g.addEdge(1, 2 ,1);
// 	g.addEdge(1, 3, 7);
// 	g.addEdge(3, 4, 2);

// 	cout << "Edges of MST are \n";
// 	int mst_wt = g.krushkalMST();

// 	cout << "\nWeight of MST is " << mst_wt;

// 	return 0;
// }





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


// #include<bits/stdc++.h>
// using namespace std;

// typedef pair<int,int> iPair;

// struct Graph
// {
// 	int V, U;
// 	vector<pair<int, iPair> > edges;
// 	Graph(int V, int U) : V(V), U(U){};

// 	void addEdge(int u, int v, int w){
// 		edges.push_back({w,{u,v}});
// 	}

// 	int krushkalMST();
// };

// struct DisjointSet{
// 	int n;
// 	int *parent;

// 	DisjointSet(int n){
// 		this->n = n;
// 		parent = new int[n];

// 		for(int i = 1; i <= n; i++){
// 			parent[i] = i;
// 		}
// 	}

// 	int Find(int u){
// 		if(parent[u] == u){
// 			return u;
// 		}else{
// 			return Find(parent[u]);
// 		}
// 	}

// 	void merge(int u, int v){
// 		int p = Find(u);
// 		int q = Find(v);

// 		if(p != q){
// 			parent[q] = p;
// 		}
// 	}
// };


// int Graph:: krushkalMST(){
// 	sort(edges.begin(), edges.end());

// 	DisjointSet ds(V);
// 	int mst_wt = 0;
// 	vector<pair<int, iPair>>:: iterator it;

// 	for(it = edges.begin(); it != edges.end(); it++){
// 		int u = it->second.first;
// 		int v = it->second.second;

// 		int set_u = ds.Find(u);
// 		int set_v = ds.Find(v);

// 		if(set_u != set_v){
// 			cout << u << " ---> " << v << endl;
// 			ds.merge(set_u, set_v);
// 			mst_wt += it->first;
// 		}
// 	} 

// 	return mst_wt;
// } 

// int main(){
// 	int V = 4, E = 4;
// 	Graph g(V, E);
// 	g.addEdge(2, 4, 5);
// 	g.addEdge(1, 2 ,1);
// 	g.addEdge(1, 3, 7);
// 	g.addEdge(3, 4, 2);

// 	cout << "Edges of MST are \n";
// 	int mst_wt = g.krushkalMST();

// 	cout << "\nWeight of MST is " << mst_wt << endl;

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// #define MX 100
// #define INF 10000000



// struct node
// {
// 	int val;
// 	int cost;
// };

// int dis[MX];
// int vis[MX];

// vector<node> G[MX];

// void reset(){
// 	for(int i = 0; i <MX; i++){
// 		G[i].clear();
// 		dis[i] = INF;
// 		vis[i] = 0;
// 	}
// }

// class cmp{
// 	public:
// 		bool operator()(node const& a, node const& b){
// 			if(a.cost > b.cost) return true;
// 			else return false;
// 		}
// };

// void Dijkstra(int source){
// 	priority_queue<node, vector<node>, cmp> PQ;
// 	PQ.push({source,0});

// 	while (!PQ.empty())
// 	{
// 		node current = PQ.top();
// 		PQ.pop();

// 		int cost = current.cost;
// 		int val = current.val;

// 		if(vis[val] == 1) continue;

// 		dis[val] = cost;
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
// 	int nodes, edges;
// 	cout << "Entter No. of Nodes and Edges: ";
// 	cin >> nodes >> edges;

// 	cout << "Enter u, v, cost: " << endl;
// 	for(int i = 1; i <= edges; i++){
// 		int u,v,w;
// 		cin >> u >> v >> w;
// 		G[u].push_back({v,w});
// 	}

// 	cout << "Enter Your Souce: " ;
// 	int source;
// 	cin >> source;
// 	Dijkstra(source);
// 	for (size_t i = 1; i <= nodes; i++)
// 	{
// 		cout << source << " ---> " << i << ": ";
// 		if(vis[i] == 0){
// 			cout << "inf" << endl;
// 		}else{
// 			cout << dis[i] << endl;
// 		}
// 	}
	
// }




// Floyd-Warshall Algorithm in C++

// C++ Program for Floyd Warshall Algorithm
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


// #include <bits/stdc++.h>
// #include <string>
// using namespace std;

// string LCS(string x, string y, int m, int n) {
//     int LcTab[m + 1][n + 1];
//     for (int i = 0; i <= m; i++) {
//         for (int j = 0; j <= n; j++) {
//             if (i == 0 || j == 0) {
//                 LcTab[i][j] = 0;
//                 cout << LcTab[i][j] << " ";
//             } else if (x[i - 1] == y[j - 1]) {
//                 LcTab[i][j] = 1 + LcTab[i - 1][j - 1];
//                 cout << LcTab[i][j] << " ";
//             } else {
//                 LcTab[i][j] = max(LcTab[i][j - 1], LcTab[i - 1][j]);
//                 cout << LcTab[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }

//     int index = LcTab[m][n];
//     string lcs(index, ' ');

//     int i = m;
//     int j = n;

//     while (i > 0 && j > 0)
//     {
//         if(x[i - 1] == y [j-1] ){
//             lcs[index - 1] = x[i-1];
//             i--;
//             index--;
//             j--;
//         }else if(LcTab[i-1][j] > LcTab[i][j-1]){
//             i--;
//         }else{
//             j--;
//         }
//     }

//     return lcs;
// }

// int main() {
//     string S1 = "providence";
//     string S2 = "president";

//     int m = S1.length();
//     int n = S2.length();

//     string result = LCS(S1, S2, m, n);
//     cout << "Longest Common Subsequence: " << result << endl;

//     return 0;
// }


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
// 				lcTab[i][j] = max(lcTab[i-1][j],lcTab[i][j-1]);
// 				cout << lcTab[i][j] << " ";
// 			}
// 		}
// 		cout << "\n";
// 	}

// 	int index = lcTab[m][n];
// 	string lcs(index, ' ');

// 	int i = m;
// 	int j = n;

// 	while(i > 0 && j > 0){
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
// 	string S1 = "providence";
//     string S2 = "president";

//     int m = S1.length();
//     int n = S2.length();

//     string result = LCS(S1, S2, m, n);
// 	cout << result;
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


// #include<iostream>
// using namespace std;

// int main(){
//     int weight[] = {0, 3, 5, 7, 8, 9, 10, 11};
//     int profit[] = {0, 5, 7, 8, 2, 3, 11, 12};

//     int n = sizeof(weight) / sizeof(weight[0]) - 1;
//     int bagSize = 20;
//     int k[n+1][bagSize+1];

//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= bagSize; j++){
//             if(i == 0 || j == 0){
//                 k[i][j] = 0;
//                 cout << k[i][j] << " ";
//             }else if(weight[i] <= j){
//                 k[i][j] = max(profit[i] + k[i-1][j - weight[i]], k[i-1][j]);
//                 cout << k[i][j] << " ";
//             }else{
//                 k[i][j] = k[i-1][j];
//                 cout << k[i][j] << " ";
//             }
//         }

//         cout << endl;
//     }

//     int i = n;
//     int j = bagSize;

//     while (i > 0 && j > 0)
//     {
//         if(k[i][j] == k[i-1][j]){
//             cout << i << " :0" << endl;
//             i--;
//         }else{
//             cout << i << " :1" << endl;
//             j-= weight[i];
//             i--;
//         }
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int item;
//     cout << "Please Enter Number of Items: ";
//     cin >> item;

//     int bagSize;
//     cout << "Please Enter Maximum Bag Capacity: ";
//     cin >> bagSize;

//     cout << "Please Enter weight and profit: ";
//     int weight[item];
//     int profit[item];

//     for(int i = 0; i < item; i++){
//         cin >> weight[i] >> profit[i]; 
//     }

//     int k[item+1][bagSize+1];

//     for(int i = 0; i <= item; i++){
//         for(int j = 0; j <=bagSize; j++){
//             if(i == 0 || j == 0){
//                 k[i][j] = 0;
//                 cout << k[i][j] << " ";
//             }else if(weight[i-1] <= j){
//                 k[i][j] = max(profit[i-1] + k[i-1][j - weight[i-1]], k[i-1][j]);
//                 cout << k[i][j] << " ";
//             }else{
//                 k[i][j] = k[i-1][j];
//                 cout << k[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }

//     int i = item;
//     int j = bagSize;

//     while (i > 0 && j > 0)
//     {
//         if(k[i][j] == k[i-1][j]){
//             cout << i  << ": 0" << endl;
//             i--;
//         }else{
//             cout << i << ": 1" << endl;
//             j -= weight[i-1];
//             i--;
//         }
//     }
    
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int item;
//     cout << "Please Enter Number of Items: ";
//     cin >> item;

//     int bagSize;
//     cout << "Please Enter Maximum Bag Capacity: ";
//     cin >> bagSize;

//     cout << "Please Enter weight and profit: ";
//     int weight[item+1];
//     int profit[item+1];

//     for(int i = 1; i <= item; i++){
//         cin >> weight[i] >> profit[i]; 
//     }

//     int k[item+1][bagSize+1];

//     for(int i = 0; i <= item; i++){
//         for(int j = 0; j <= bagSize; j++){
//             if(i == 0 || j == 0){
//                 k[i][j] = 0;
//                 cout << k[i][j] << " ";
//             }else if(weight[i] <= j){
//                 k[i][j] = max(profit[i] + k[i-1][j - weight[i]], k[i-1][j]);
//                 cout << k[i][j] << " ";
//             }else{
//                 k[i][j] = k[i-1][j];
//                 cout << k[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }

//     int i = item;
//     int j = bagSize;

//     while (i > 0 && j > 0)
//     {
//         if(k[i][j] == k[i-1][j]){
//             cout << i  << ": 0" << endl;
//             i--;
//         }else{
//             cout << i << ": 1" << endl;
//             j -= weight[i];
//             i--;
//         }
//     }
    
//     return 0;
// }

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