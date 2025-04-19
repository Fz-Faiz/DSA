#include<bits/stdc++.h>
using namespace std; 

class Solution {
    private:
       void dfs(int row, int col, vector<vector<int>>&ans, vector<vector<int>>& image, int color, int delrow[], int delcol[], int iniColor){
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();
        for( int i = 0; i < 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if( nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == iniColor && ans[nrow][ncol] != color){
                dfs(nrow, ncol, ans, image, color, delrow, delcol, iniColor);
    
            }
        }
       }
    public:
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    
            int iniColor = image[sr][sc];
            vector<vector<int>> ans = image;
            int delrow[] = {-1,0,1,0};
            int delcol[] = {0,1,0,-1};
            dfs(sr, sc, ans, image, color, delrow, delcol, iniColor);
            return ans;
            
        }
    };