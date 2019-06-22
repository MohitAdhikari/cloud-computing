/*

left rotate an array by 1

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    temp=a[0];
    for(i=0;i<n;i++)
        a[i]=a[i+1];
    a[n-1]=temp;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}