#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,rev=0,digit,temp;
    cin >> n;
    temp=n;
    while (n > 0) {
    digit=n%10;
    rev=(rev*10)+digit;
    n=n/10;
    }
    if(temp==rev)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
