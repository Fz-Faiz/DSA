#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> blackBoard(n);
        unordered_map<int, int> freq;
        
        for(int i=0;i<n;i++){
            cin>>blackBoard[i];
            freq[blackBoard[i]]++;
        }
        int score =0;
        for (auto& it : freq) {
            int a = it.first;
            int b = k - a;

            if (freq[a] > 0) { 
                if (a == b) { 
                    score += freq[a] / 2; 
                    freq[a] = 0;          
                } else if (freq[b] > 0) {
                    int pairs = min(freq[a], freq[b]);
                    score += pairs;
                    freq[a] -= pairs;
                    freq[b] -= pairs;
                }
            }
        }

        cout << score << endl;
    }
   
    
}