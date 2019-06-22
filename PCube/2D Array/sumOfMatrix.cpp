/*

FIND SUM OF TWO SQUARE MATRIX

*/

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int m,n,i,j;
    cin>>n;;
    int a[n][n],b[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]+=b[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

