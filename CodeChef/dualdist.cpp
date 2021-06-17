#include <bits/stdc++.h>
#define lim 1000000007
#define rep(a,b,step) for(int i=a;i<b;i+=step)
#define min(a,b) (a>b)?b:a
#define max(a,b) (a>b)?a:b
using namespace std;


typedef unsigned long long ull;
typedef unsigned long ul;
typedef long long ll;



vector<ull> fact(1000000,1);
void factorial(){
    for (ull i = 2;i<1000000;i++){
        fact[i] = i* fact[i-1];
    }
}
void add_edge(vector<ul> *adj, ul src, ul dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

bool BFS(vector<ul> *adj, ul src, ul dest, ul v,
         ul pred[], ul dist[])
{
    list<ul> queue;
 
    bool visited[v];
 
    for (ul i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);
 
 
    while (!queue.empty()) {
        ul u = queue.front();
        queue.pop_front();
        for (ul i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);
 
                if (adj[u][i] == dest)
                    return true;
            }
        }
    }
 
    return false;
}
 
ul dista(vector<vector<ul>> adj, ul s,
                           ul dest, ul v)
{
    
    ul pred[v], dist[v];
 
    if (BFS(adj, s, dest, v, pred, dist) == false) {
        return 0;
    }
 
    vector<ul> path;
    ul crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }
 
    return dist[dest];

}


void solve(){
    ul N,Q;
    cin>>N>>Q;
    
 
    vector<vector<ul>> adj(N,vector<ul> (N));
    
    for(ul i=0;i<N-1;i++){
        ul x, y;
        cin>>x>>y;
        add_edge(adj,x,y);
        
    }
    
    while(Q--){
        ul a,b,dis = 0;
        cin>>a>>b;
        for(ul i =0;i<N;i++){
            dis += min(dista(adj, i, a, N),dista(adj, i, b, N));
        }
        cout<<dis<<endl;
    }
    
    
}
int main() {
    // factorial();
    unsigned int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}
