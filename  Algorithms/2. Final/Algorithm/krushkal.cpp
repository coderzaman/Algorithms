#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
struct Graph
{

    int V, E;
    vector<pair<int, iPair>> edges;

    Graph(int V, int E)
    {
        this->V = V;
        this->E = E;
    }

    void addEdge(int u, int v, int w)
    {
        edges.push_back({w, {u, v}});
    }

    int kruskalMST();
};

struct DisjointSet
{

    int *parent;
    int n;

    DisjointSet(int n)
    {
        this->n = n;
        parent = new int[n];

        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int u)
    {
        if (u == parent[u])
        {
            return u;
        }
        else
        {
            return find(parent[u]);
        }
    }

    void merge(int u, int v){
        int p = find(u);
        int q = find(v);

        if(p != q){
            parent[q] = p;
        }
    }
};

int Graph::kruskalMST(){
    int mst_wt = 0;
    sort(edges.begin(), edges.end());

    //for Maximum Spanning tree
    //reverse(edges.begin(), edges.end());
    
    DisjointSet ds(V);

    vector<pair<int, iPair>>::iterator it;

    for(it = edges.begin(); it != edges.end(); it++){
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        if(set_u != set_v){
            cout << u << " - " << v << endl;
            mst_wt += it->first;
            ds.merge(set_u, set_v);
        }

    }

    return mst_wt;

}

int main()
{
	int V = 4, E = 4;
	Graph g(V, E);
	g.addEdge(2, 4, 5);
	g.addEdge(1, 2 ,1);
	g.addEdge(1, 3, 7);
	g.addEdge(3, 4, 2);


	cout << "Edges of MST are \n";
	int mst_wt = g.kruskalMST();

	cout << "\nWeight of MST is " << mst_wt;

	return 0;
}
