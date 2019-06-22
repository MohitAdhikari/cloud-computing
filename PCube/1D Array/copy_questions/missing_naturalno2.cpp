/*

given natural no. 1 2 3 4...N one is missing. find it.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp=0,n,i,sum;
    cin>>n;
    sum=n*(n+1)/2;
    int a[n-1];
    for(i=0;i<n-1;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
        temp+=a[i];
    cout<<sum-temp;
    return 0;
}