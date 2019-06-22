/*

find sum till nth term of gp 2,4,8,16,32,...
 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,sum=0,a=2,r=2;
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=a;
        a=a*r;
    }
    cout<<sum;
}
