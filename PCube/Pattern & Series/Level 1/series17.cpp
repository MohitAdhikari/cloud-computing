/*

print n terms & sum of n terms of an ap..
 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,d,ap[3],sum=0;
    cin>>n;
    for(i=0;i<3;i++)
        cin>>ap[i];

    a=ap[0];
    d=ap[1]-ap[0];
    for(i=1;i<=n;i++)
    {
        cout<<a;
        sum+=a;
        a=a+d;
    }
    cout<<endl<<sum;
}
