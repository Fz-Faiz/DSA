class Solution {
public:
    typedef pair<int, pair<int,int>> P;
    vector<vector<int>> dirs = {{-1, 0},{1, 0},{0,-1},{0, 1}};
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        vector<vector<int>> result(m, vector<int>(n, INT_MAX));

        priority_queue<P, vector<P>, greater<P>> pq;

        auto isSafe = [&](int x, int y){
            return x >= 0 && x < m && y >= 0 && y < n;
        };
        result[0][0] = 0;
        pq.push({0, {0,0}});

        while(!pq.empty()){
            int diff = pq.top().first;
            auto cord = pq.top().second;
            pq.pop();

            int x = cord.first;
            int y = cord.second;

            

            for(auto &dir: dirs){
                int x_ = x + dir[0];
                int y_ = y + dir[1];

                if(isSafe(x_, y_)){
                    int absDiff = abs(heights[x][y] - heights[x_][y_]);
                    int maxDiff = max(diff, absDiff);

                    if(result[x_][y_] > maxDiff){
                        result[x_][y_]  = maxDiff;
                        pq.push({maxDiff, {x_, y_}}); 
                    }
                }
            }
        }

        return result[m-1][n-1];

        
    }
};


class Solution {
public:
    typedef pair<int,int> P;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        unordered_map<int, vector<pair<int,int>>> adj;

        for(auto &vec: times){
            int u = vec[0];
            int v = vec[1];
            int w = vec[2];

            adj[u].push_back({v, w});
        }

        priority_queue<P, vector<P>, greater<P>> pq;

        vector<int> result(n+1, INT_MAX);

        result[k] = 0;
        pq.push({0, k});

        while(!pq.empty()){
            
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto &vec: adj[node]){
                int adjNode = vec.first;
                int dist = vec.second;

                if(d + dist < result[adjNode]){
                    result[adjNode] = d + dist;
                    pq.push({d+dist, adjNode});
                }
            }
        }
        int ans = INT_MIN;
        for(int i = 1;  i <= n ; ++i){
            ans = max(ans,  result[i]);
        }
        return ans == INT_MAX? -1 : ans;
    }
};