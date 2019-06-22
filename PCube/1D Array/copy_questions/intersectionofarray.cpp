/*

intersection of two sorted arrays.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,j,k;
    cin>>m>>n;
    int a[m],b[n],c[m+n];
    for(i=0;i<m;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    i=0;
    j=0;
    k=1;
    c[0]=INT_MIN;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else {
            if(c[k-1]!=a[i]){
                c[k++]=b[j++];
                i++;
            }
            else{
                i++;
                j++;
            }
        }
    }
    for(i=1;i<k;i++)
        cout<<c[i]<<" ";
    return 0;
}