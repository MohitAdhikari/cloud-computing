/*

subtract two binary numbers and give decimal op

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,n,decimal1=0,decimal2=0;
    cin>>m>>n;
    int a[m],b[n];
    for(i=m-1;i>=0;i--){
        cin>>a[i];
        decimal1+=a[i]*pow(2,i);
    }
    for(i=n-1;i>=0;i--){
        cin>>b[i];
        decimal2+=b[i]*pow(2,i);
    }
    cout<<decimal1-decimal2;
    return 0;
}