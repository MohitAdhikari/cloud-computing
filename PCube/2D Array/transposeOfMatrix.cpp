/*
FIND TRANSPOSE OF A 2D ARRAY
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int a[m][n],b[n][m];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            b[j][i]=a[i][j];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}