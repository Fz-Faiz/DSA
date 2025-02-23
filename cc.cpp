#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<int> a(n);
	    vector<int> b(m);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
        for(auto it:b){
            cout<<it<<" ";
        }
        cout<<endl;
	}

}
