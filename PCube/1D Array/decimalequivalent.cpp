/*

decimal equivalent of a number

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    long int ans=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++){
        ans+=a[n-i-1]*pow(2,i);
    }
    cout<<ans;
    return 0;
}