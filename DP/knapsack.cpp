class Solution {
  public:
    int knapsackRec(int W, vector<int> &val, vector<int> &wt, int n, vector<vector<int>> &dp) {

    // Base Case
    if (n == 0){
        if(wt[0] <= W ) return val[0];

        else return 0;
    }
    if(dp[n][W] != -1) return dp[n][W];
    int notPick =0+ knapsackRec(W, val, wt, n - 1, dp);

    int pick = INT_MIN;

    // Pick nth item if it does not exceed the capacity of knapsack
    if (wt[n] <= W)
        pick = val[n] + knapsackRec(W - wt[n], val, wt, n - 1, dp);
    
    // Don't pick the nth item
     
    return dp[n][W]=max(pick, notPick);
}
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size();
        vector<vector<int>> dp(n, vector<int>(W+1,-1));
        return knapsackRec(W, val, wt, n-1, dp);
    }
};