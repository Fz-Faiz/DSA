#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    bool ans = true;
    for(int i = 0 ; i < n /2 ;++i){
        if(s[i] == s[n-i-1]) continue;
        else ans = false;
    }
    if(ans == true) cout << "YES";
    else cout << "NO";
}