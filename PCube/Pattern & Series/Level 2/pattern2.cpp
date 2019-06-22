/*

    input: rows=5 cols=8
    ********
     *      *
      *      *
       *      *
        ********

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,row,col,j,nspace=0;
    cin >>row>>col;
    for(i=1;i<=row;i++){
        
        for(j=1;j<=nspace;j++)
            cout<<" ";
        
        for(j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col)
                cout<<"*";
            else
                cout<<" "; 
        }
        cout<<endl;
        nspace++;
    }
    return 0;
}