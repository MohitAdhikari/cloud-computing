/*

    1 2 3 4
    5 6 7 8
    10 11 12 13
    
    op-> 1 2 5 10 6 3 4 7 11 12 8 13

*/

#include<bits/stdc++.h>
using namespace std;

void printrev(int m,int n,int *a,int k){
    int first=0,second;
        second=min(k,n-1);
    if(k>n-1)
        first=k-(n-1);
    while(first<m&&second>=0){
        cout<<*((a+first*n) + second)<<" ";
        first++;
        second--;
    }
}
void printfor(int m,int n,int *a,int k){
    int first,second=0;
        first=min(k,m-1);
    if(k>m-1)
        second=k-(m-1);
    while(first>=0&&second<n){
        cout<<*((a+first*n) + second)<<" ";
        first--;
        second++;
    }
}

int main(){
    int m,n,i,j;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<m+n-1;i++){
        if(i%2==0)
            printrev(m,n,(int *)a,i);
        else
            printfor(m,n,(int *)a,i);
    }
    return 0;
}