/*

Print Z pattern
n=5
1 2 3 4 5
      4
    3
  2
1 2 3 4 5

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,nspace;
    cin>>n;
    for(i=n;i>=1;i--){
        if(i==1||i==n){
            for(j=1;j<=n;j++)
                cout<<j<<" ";
            cout<<endl;
        }
        else
        {
            nspace=2*i-2;
            for(j=1;j<=nspace;j++)
                cout<<" ";
            cout<<i<<endl;
        }
    }
    return 0;
}