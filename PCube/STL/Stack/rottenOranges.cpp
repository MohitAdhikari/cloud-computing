/*

find min time it takes to rot all oranges

*/
#include<bits/stdc++.h>
using namespace std;
void printQ(queue <pair<int,int>> q){
    while(!q.empty()){
        cout<<q.front().first<<","<<q.front().second<<endl;
        q.pop();
    }
}
int main(){
    int n,m,i,j,x,y,count=0,flag=0;
    queue <pair<int,int>> q;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]==2){
                q.push(make_pair(i,j));
            }
        }
    }
    q.push(make_pair(-1,-1));
    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        //cout<<x<<" "<<y<<endl;
        //printQ(q);
        //cout<<endl;
        if(x==-1&&y==-1&&flag==1){
            count++;
            flag=0;
            q.push(make_pair(-1,-1));
        }
        else if(x>=0&&y>=0&&x<m&&y<n&&a[x-1][y]==1){
            q.push(make_pair(x-1,y));
            a[x-1][y]=2;
            flag=1;
        }
        else if(x>=0&&y>=0&&x<m&&y<n&&a[x+1][y]==1){
            q.push(make_pair(x+1,y));
            a[x+1][y]=2;
            flag=1;
        }
        else if(x>=0&&y>=0&&x<m&&y<n&&a[x][y-1]==1){
            q.push(make_pair(x,y-1));
            a[x][y-1]=2;
            flag=1;
        }
        else if(x>=0&&y>=0&&x<m&&y<n&&a[x][y+1]==1){
            q.push(make_pair(x,y+1));
            a[x][y+1]=2;
            flag=1;
        }
        q.pop();
    }
    cout<<count;
    return 0;
}