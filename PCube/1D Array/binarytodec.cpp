/*

convert binary to decimal

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,size;
    cin>>n;
    size=ceil(log2(n));
    int a[size];
    while(n>0){
        a[i++]=n%2;
        n=n/2;
    }
    for(i=size-1;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;
}