/*

find difference of two sorted arrays

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,j,k;
    cin>>n>>m;
    int a[n],b[m],c[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    i=0;
    j=0;
    k=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            j++;
        }
        else {
            j++;
            i++;
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    for(i=0;i<k;i++)
        cout<<c[i]<<" ";
    return 0;
}