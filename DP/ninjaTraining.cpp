#include<bits/stdc++.h>
using namespace std;

int f (int day , int last , vector<vector<int>> &points) {
    if( day == 0 ){
        int maxi = 0;
        for(int task = 0; task < 3; task++){
            if(task != last) {
                maxi = max(maxi, points[0][task]);
            }

        }
        return maxi;
    }

    int maxi = 0;
    for(int task = 0 ; task < 3 ; task ++){
        if(task != last){
            int point = points[day][task] + f(day-1, task, points);
            maxi = max(maxi, point);
        }
    }
    return maxi;
}