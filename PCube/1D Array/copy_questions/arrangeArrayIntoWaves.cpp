/*

arrange array elements into wave
a1>=a2<=a3>=a4<=a5....

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i=i+2){
        swap(a[i-1],a[i]);
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}