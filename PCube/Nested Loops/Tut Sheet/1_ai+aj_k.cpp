/*

A[i]+A[j]==k

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,k,j;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    i=0;
    j=n-1;
    while(i<j){
        if(a[i]+a[j]<k)
            i++;
        else if(a[i]+a[j]>k)
            j--;
        else
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}