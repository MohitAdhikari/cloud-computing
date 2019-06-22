/*

****
 ****
  ****
   **** 

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,nspace=0;
    cin >> n;
    for(i=1;i<=n;i++){
        
        for(j=1;j<=nspace;j++)
            cout<<" ";
        
        for(j=1;j<=n;j++)
            cout<<"*";
        cout<<endl;
        nspace++;
    }
    return 0;
}