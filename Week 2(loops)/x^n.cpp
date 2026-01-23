#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x,n;
    cin>>x>>n;
    long long exp=1;
    for (int i = 0; i < n; ++i) {
        exp *= x;
    }
    cout<<exp;   
}