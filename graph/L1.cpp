#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int> &vis, vector<int> &ans){
    vis[node]=1;
    ans.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis, ans);
        }
    }
}

int main() {
    // int n ,m;
    // cin >> n >> m;

    // // matrix method
    // // o(n*n) space 
    // int adj[n+1][m+1];

    // for( int i = 0; i < m; i++) {  
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }

    // // list method
    // vector<int> adj[n+1];
    // for(int i = 0; i < m; i++) {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);

    // }

    // BFS

    // int visited[n] ={0};
    // visited[0]=1;
    // queue<int> q;
    // q.push(0);
    // vector<int> bfs;
    // while(!q.empty()) {
    //     int node = q.front();
    //     q.pop();
    //     bfs.push_back(node);

    //     for(auto it: adj[node]){
    //         if(!visited[it]){
    //             visited[it] = 1;
    //             q.push(it)
    //         }
    //     }
    // }
    // return bfs;


    // // dfs recursion

    // int n = adj.size();
    //     vector<int> vis(n,0);
    //     int start =0;
    //     vector<int> ans;
    //     dfs(start, adj, vis, ans);
    //     return ans;
    

}
