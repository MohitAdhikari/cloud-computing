/*
FIND WHICH COL HAS MAX SUM IN A MATRIX
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,max=INT_MIN,sum=0,pos=-1;
    cin>>m>>n;;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum+=a[j][i];
        }
        if(sum>max){
            max=sum;
            pos=i+1;
        }
    }
    cout<<pos<<endl;
    return 0;
}