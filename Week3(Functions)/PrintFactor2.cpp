#include <bits/stdc++.h>
using namespace std;

void hello(int n)
{
    for(int i=n;i>=1;i--){
        if(n%i==0)
        cout<<i<<" ";
    }
}
int main() {
	int ip;
	cin>>ip;
	hello(ip);
	return 0;

}
