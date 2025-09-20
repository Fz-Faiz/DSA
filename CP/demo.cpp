#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int xx = x, yy = y;
        int i=0,j=0;
        int steps = 0;
        while(true){
            if(i == x && j == y){
                cout << i << j;
                break;
            }
            if(i&1){
                if(x&1) i += 
                steps++;
            }else{
                steps++;
            }
        }
        cout << i << j;
    }
    
}