/*
FIND WHETHER A GIVEN MATRIX IS MAGIC OR NOT
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sumr=0,newsumr=0,sumc=0,sumd=0,sumsd=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    for(i=0;i<n;i++){
        sumr=0;
        for(j=0;j<n;j++){
            if(i==0){
                sumr+=a[i][j];
                newsumr+=a[i][j];
            }
            else
                sumr+=a[i][j];
            
            if(i==j)
                sumd+=a[i][j];
            if(i+j==n-1)
                sumsd+=a[i][j];
            
        }
        if(sumr!=newsumr){
            cout<<"Not a magic matrix1";
            return 0;
        }
    }
    for(i=0;i<n;i++){
        sumc=0;
        for(j=0;j<n;j++){
            sumc+=a[j][i];
        }
        if(newsumr!=sumc){
            cout<<"Not a magic matrix2";
            return 0;
        }    
    }
    if(sumd!=sumsd||sumsd!=sumr){
        cout<<"Not a magic matrix3";
            return 0;
    }
    cout<<"Magic matrix";
    return 0;
}