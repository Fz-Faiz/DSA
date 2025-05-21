#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abc";
    int n = s.length();
    vector<string> ans;
    int m = pow(2,n);

    for(int i = 0 ; i < m ; i++ ){
        string sub = "";
        for(int j = 0; j < n; j++){
            if(i & (1<<j)){
                sub += s[j];


            }
        }
        if(sub == "") ans.push_back("\"\"");
        else ans.push_back(sub);
    }

    for(auto it: ans){
        cout<<it<<endl;
    }
}