#include <bits/stdc++.h>
using namespace std;

void fact(int n, int r)
{   int nfact=1,rfact=1,tempfact=1;
    int temp=(n-r);
    for(int i=n;i>=1;i--){
    nfact=nfact*i;
    }
     for(int i=r;i>=1;i--){
    rfact=rfact*i;
    }
    for(int i=temp;i>=1;i--){
    tempfact=tempfact*i;
    }
    cout<<(nfact/(rfact*tempfact));
}
int main() {
	int n,r;
	cin>>n>>r;
    fact(n,r);
	return 0;

}
