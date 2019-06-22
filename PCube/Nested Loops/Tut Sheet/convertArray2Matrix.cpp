/*

convert an array into matrix of a*b

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,a1,b1,k=0,j;
    cin>>n>>a1>>b1;
    int a[n],matrix[a1][b1];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
            matrix[i][j]=a[k++];
    }
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}