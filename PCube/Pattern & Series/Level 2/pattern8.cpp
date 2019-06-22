/*

Print N pattern

    n=5

1     1
22    2
3 3   3
*  *  *
*   * *
*    **   
N     N

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,nspace=0,ispace;
    cin>>n;
    ispace=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nspace;j++){
            if(j==1)
                cout<<i;
            else
                cout<<" ";
        }
        cout<<i;
        for(j=1;j<=ispace;j++){
            if(j==ispace)
                cout<<i;
            else
                cout<<" ";
        }
        cout<<endl;
        ispace--;
        nspace++;
    }
    return 0;
}