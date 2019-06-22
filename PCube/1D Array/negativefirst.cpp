/*

shift all negative to starting of array.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k=0;
    cin>>n;
    int a[n],c[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < n; i++)
    {
        if(a[i]<0)
            c[k++]=a[i];
    }
    for ( i = 0; i < n; i++)
    {
        if(a[i]>=0)
            c[k++]=a[i];
    }
    for ( i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}