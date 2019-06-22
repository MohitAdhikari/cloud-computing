/*
FIND WHICH COL HAS MAX NO OF 1'S IN A BINARY MATRIX
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,max=INT_MIN,count,pos=-1;
    cin>>m>>n;;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<m;j++){
            if(a[j][i])
                count++;
        }
        if(count>=max){
            max=count;
            pos=i+1;
        }
    }
    cout<<pos<<endl;
    return 0;
}