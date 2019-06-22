/*

remove element from an array at kth index.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,kth;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>kth;
    for(i=kth;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}