#include<bits/stdc++.h>
using namespace std;
int main(){
    int **arr,m,n,i,j,**b;
    cin>>m>>n;
    arr=(int**)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++){
        arr[i]=(int *)malloc(sizeof(int)*n);
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j];
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    b=new int*[m];
    for(i=0;i<m;i++){
        b[i]=new int[n];
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>b[i][j];
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}