/*

contiguous subarray with max sum.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,globalmax=INT_MIN,localmax=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        localmax+=a[i];
        if(globalmax<localmax)
            globalmax=localmax;
        if(localmax<0)
            localmax=0;
    }
    cout<<globalmax;
    return 0;
}