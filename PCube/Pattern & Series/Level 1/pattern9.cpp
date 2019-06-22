/*

    *
   * *
  *   *
 *     *
  *   *
   * *
    *
 
 
*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,n,nspace,toprint=1;
    cin>>n;
    nspace=n/2;
    for(i=1;i<=(n/2)+1;i++){
        for(j=1;j<=nspace;j++)
            cout<<" ";
        for(j=1;j<=toprint;j++){
            if(j==1||j==toprint)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
        nspace--;
        toprint+=2;
   }
   toprint-=4;
   nspace=1;
   for(i=1;i<=n/2;i++){
        for(j=1;j<=nspace;j++)
            cout<<" ";
        for(j=1;j<=toprint;j++){
            if(j==1||j==toprint)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
        nspace++;
        toprint-=2;
   }
}
