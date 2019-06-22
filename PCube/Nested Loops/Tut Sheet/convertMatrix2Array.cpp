/*

convert an array into matrix of a*b

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,j,k=0,l=0,m;
    cin>>n>>m;
    int a[n][n],b[n*m],c[n*m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
            if(a[i][j]%2==0)
                c[k++]=a[i][j];
            else
            {
                b[l++]=a[i][j];
            }
            
        }
    }
    for(i=0;i<k;i++)
        cout<<c[i]<<" ";
    cout<<endl;
    for(i=0;i<l;i++)
        cout<<b[i]<<" ";

    return 0;
}