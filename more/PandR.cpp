#include<bits/stdc++.h>
using namespace std;

int main() {
    int* ptr;
    int var =7;
    int foo = 21;
    ptr = &var;
    int& ref = var;
    cout<<*ptr<<"\n";
    cout<<ref;
}