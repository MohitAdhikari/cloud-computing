/*

given natural no. 1 2 3 4...N one is missing. find it.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp=0,n,i;
    cin>>n;
    int a[n-1];
    for(i=0;i<n-1;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        temp^=i;
    for(i=0;i<n-1;i++)
        temp^=a[i];
    cout<<temp;
    return 0;
}