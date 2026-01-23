#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,pos=0,neg=0,odd=0,even=0;
    cin>>n;
    int ip[n];
    for(int i=0;i<n;i++)
    { cin>>ip[i];
    if(ip[i]>=1)
        pos++;
    else if(ip[i]<0)
        neg++;
    if(ip[i]%2==0)
        even++;
    else if(ip[i]%2!=0)
        odd++;
    }
    cout<<pos<<endl<<neg<<endl<<even<<endl<<odd;
}