/*

Print H pattern
n=3
1   3
2   2
3 2 1
2   2
1   3

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,nspace;
    cin>>n;
    nspace=2*(n-2)+1;
    for(i=1;i<=n-1;i++){
        cout<<i;
        for(j=1;j<=nspace;j++)
            cout<<" ";
        cout<<n-i+1<<endl;
    }
    for(i=n;i>=1;i--)
        cout<<i<<" ";
    cout<<endl;
    for(i=n-1;i>=1;i--){
        cout<<i;
        for(j=1;j<=nspace;j++)
            cout<<" ";
        cout<<n-i+1<<endl;
    }
    return 0;
}