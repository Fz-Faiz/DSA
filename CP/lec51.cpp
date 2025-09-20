#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int ele){
    int lo =0, hi = v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid  = (hi+lo)/2;
        if(v[mid]<ele){
            lo = mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]>=ele ) return lo;
    if(v[hi]>=ele) return hi;
    return -1;
}
int upper_bound(vector<int> &v, int ele){
    int lo =0, hi = v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid  = (hi+lo)/2;
        if(v[mid]<=ele){
            lo = mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]>ele ) return lo;
    if(v[hi]>ele) return hi;
    return -1;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i =0;i<n;++i){
        cin >> v[i];
    }
}