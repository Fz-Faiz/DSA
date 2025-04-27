#include <bits/stdc++.h>
using namespace std;

vector<int> shorteshPath(int n , int m, vector<vector<int>> & edges){
        vector<pair<int,int>> adj[n-1];
        for(auto it: edges){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        priority_queue<pair<int,int> , 
        vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<int> dist(n+1, le9), parent[i] = i;
        dist[i] = 0;
        while(!pq.empty()){
            auto it: pq.top();
            int node = it.second;
            int dis = it.first;
            pq.pop();

            for(auto it: adj[node]){
                int adjNode = it.first;
                int edWt = it.second;
                if(dis + edWt < dist[adjNode]){
                    dist[adjNode] = dis + edWt;
                    pq.push({dist+edWt , adjNode});
                    parent[adjNode] = node;
                }
            }

            if( dist[n] == 1e9) return {-1};
            vector<int> path;
            int node = n;
            while(parent[node] != node){
                path.push_back(node);
                node = parent[node];
            }
            path.push_back(1);
            reverse(path.begin(),path.end());
            return path;
            
        }
    }
}

int main(){
    // Example usage of shorteshPath function
    int n = 5, m = 6;
    vector<vector<int>> edges = {{1, 2, 2}, {1, 3, 4}, {2, 3, 1}, {2, 4, 7}, {3, 5, 3}, {4, 5, 1}};
    vector<int> result = shorteshPath(n, m, edges);
    for (int node : result) {
        cout << node << " ";
    }
    return 0;
}