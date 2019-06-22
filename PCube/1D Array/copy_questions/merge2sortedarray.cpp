/*

merge two sorted arrays

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k;
    cin>>n;
    int a[n],b[n],c[2*n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    i=0;
    j=0;
    k=0;
    while(i<n&&j<n)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
    for(i=0;i<k;i++)
        cout<<c[i]<<" ";
    return 0;
}