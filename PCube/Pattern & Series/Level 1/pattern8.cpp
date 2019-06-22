/*

    *
   ***
  *****
 *******
 
 
*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,n,nspace,toprint=1;
    cin>>n;
    nspace=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nspace;j++)
            cout<<" ";
        for(j=1;j<=toprint;j++)
            cout<<"*";
        cout<<endl;
        nspace--;
        toprint+=2;
   }
}
