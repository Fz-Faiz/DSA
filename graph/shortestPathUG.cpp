#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& adj, int src){
        int  n =adj.size();
        
        vector<int> dist(n);
        for(int i=0;i<n;i++) dist[i] = 1e9;
        
        dist[src] = 0;
        queue<int> q;
        q.push(src);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it : adj[node]){
                if(dist[node]+1 < dist[it]){
                    dist[it] = dist[node] +1;
                    q.push(it);
                }
            }
        }
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            if(dist[i] != 1e9){
                ans[i] = dist[i];
            }
        }
        return ans;
  

    }
};

int main(){

int N=9, M=10;
vector<vector<int>> edges= {{0,1},{0,3},{3,4},{4,5},{5,6},{1,2},{2,6},{6,7},{7,8},{6,8}};

Solution obj;
vector<int> ans = obj.shortestPath(edges,N,M,0);

for(int i=0;i<ans.size();i++){
    
    cout<<ans[i]<<" ";
}

return 0;
}