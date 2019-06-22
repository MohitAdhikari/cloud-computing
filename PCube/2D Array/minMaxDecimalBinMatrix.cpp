/*
FIND WHICH ROW DECIMAL VALUE IS MIN & MAX NO IN A BINARY MATRIX
*/

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int m,n,i,j,max=INT_MIN,min=INT_MAX,posmin,posmax,temp;
    cin>>m>>n;;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<m;i++){
        temp=0;
        for(j=0;j<n;j++)
            temp+=a[i][j]*pow(2,n-j-1);
        if(temp>max){
            max=temp;
            posmax=i;
        }
        if(temp<min){
            min=temp;
            posmin=i;
        }
    }
    cout<<posmin<<endl<<posmax;
    return 0;
}