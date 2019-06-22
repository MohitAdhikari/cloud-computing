/*

find common elements in three sorted arrays

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
        if(a[i]<b[j]||a[i]<c[k])
        {
            i++;
        }
        else if(b[j]<a[i]||b[j]<c[k])
        {
            j++;
        }
        else if(c[k]<a[i]||c[k]<b[j])
        {
            k++;
        }
        else if(a[i]==b[j]&&a[i]==c[k]){
            d[l++]=a[i++];
            j++;
            k++;
        }
    }
    
    for(i=0;i<l;i++)
        cout<<d[i]<<" ";
    return 0;
}