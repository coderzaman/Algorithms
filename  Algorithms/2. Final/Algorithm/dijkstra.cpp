#include<bits/stdc++.h>
using namespace std;

#define MX 100
# define INF 10000000


struct node{
    int val;
    int cost;
};

vector<node> G[MX];
bool vis[MX];
int dist[MX];

void reset(){
    for(int i = 0; i < MX; i++){
        G[i].clear();
        vis[i] = 0;
        dist[i] = INF;
    }
}
class cmp{
    public:
    bool operator()(node const& A, node const& B){
        if(A.cost > B.cost) return true;
        return false;
    }
    
};
void dijkstra(int source){
    priority_queue<node, vector<node>, cmp> PQ; 
    PQ.push({source, 0});

    while(!PQ.empty()){
        node current = PQ.top();
        PQ.pop();

        int val = current.val;
        int cost = current.cost;

        if(vis[val] == 1) continue;

        dist[val] = cost; //cost is final
        vis[val] = 1;

        for(int i = 0; i < G[val].size(); i++){
            int nxt = G[val][i].val;
            int nextCost = G[val][i].cost;

            if(vis[nxt] == 0){
                PQ.push({nxt,cost + nextCost});
            }
        }
    }
}


int main(){
    reset();


    int nodes, edges;
    cin >> nodes >> edges;

    for (size_t i = 1; i <= edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back({v,w});
    }

    cout << "enter Source Node: ";
    int source; cin >> source;
    dijkstra(source);

    for (size_t i = 1; i <= nodes; i++)
    {
       cout << "Node: " << i << " Distance: ";
       if(dist[i] == INF) cout << " inf" << endl;
       else cout << dist[i] << endl;
    }
    
}