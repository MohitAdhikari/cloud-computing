/*

merge three sorted arrays

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,n,o,j,k,l;
    cin>>m>>n>>o;
    int a[m],b[n],c[o],d[m+n+o];
    for(i=0;i<m;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<o;i++)
        cin>>c[i];
    i=0;
    j=0;
    k=0;
    l=0;
    while(i<m&&j<n&&k<o)
    {
        if(a[i]<=b[j]&&a[i]<=c[k])
        {
            d[l++]=a[i++];
        }
        else if(b[j]<=a[i]&&b[j]<=c[k])
        {
            d[l++]=b[j++];
        }
        else if(c[k]<=a[i]&&c[k]<=b[j])
        {
            d[l++]=c[k++];
        }
    }
    while(i<m&&j<n){
        if(a[i]<=b[j]){
            d[l++]=a[i++];
        }
        else
            d[l++]=b[j++];
    }
    while(i<m&&k<o){
        if(a[i]<=c[k]){
            d[l++]=a[i++];
        }
        else
            d[l++]=c[k++];
    }
    while(j<n&&k<o){
        if(b[j]<=c[k]){
            d[l++]=b[j++];
        }
        else
            d[l++]=c[k++];
    }
    while(i<m)
    {
        d[l++]=a[i++];
    }
    while(j<n)
    {
        d[l++]=b[j++];
    }
    while(k<o)
    {
        d[l++]=c[k++];
    }
    for(i=0;i<l;i++)
        cout<<d[i]<<" ";
    return 0;
}