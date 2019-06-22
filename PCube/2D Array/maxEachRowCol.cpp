/*
FIND MAX NO IN EACH ROW AND COL
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,max=INT_MIN;
    cin>>m>>n;;
    int a[n][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>max)
                max=a[i][j];
        }
        cout<<max<<" ";
    }
    cout<<endl;
    max=INT_MIN;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[j][i]>max)
                max=a[j][i];
        }
        cout<<max<<" ";
    }
    return 0;
}