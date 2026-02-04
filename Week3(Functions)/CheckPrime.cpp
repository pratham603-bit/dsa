#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{   int count=0;
    for(int i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }
}
    return count;
}
int main() {
	int ip;
	cin>>ip;
    if(prime(ip)==2){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
	return 0;

}
