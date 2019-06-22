/*

given: NxN MATRIX
rat starts from (0,0).Is there a path from (0,0) to (n-1,n-1)

 */
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int a[MAX][MAX];
int ratMaze(int i,int j,int n){
    if(i==n-1&&j==n-1){
        return 1;
    }
    if(i>=n||j>=n||a[i][j]==0||a[i][j]==-1){
        return 0;
    }
    a[i][j]=-1;
    return max(ratMaze(i+1,j,n),ratMaze(i,j+1,n));
}
int main(){
    int i,j,n,flag=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    if(a[0][0]==1){
        flag=ratMaze(0,0,n);
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}