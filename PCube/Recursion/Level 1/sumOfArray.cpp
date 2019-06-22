/*

   sum of an array

*/
#include<bits/stdc++.h>
using namespace std;
int sumarr(int a[],int n){
    if(n==0)
        return a[0];
    return a[n]+sumarr(a,n-1); 
}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<sumarr(a,n-1);
    return 0;
}