/*

FIND PRODUCT OF TWO SQUARE MATRIX

*/

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int m,n,m1,n1,i,j,k;
    cin>>m>>n;
    cin>>m1>>n1;
    int a[m][n],b[m1][n1],c[n][m1];
    if(m==n1){
        for(i=0;i<m1;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                cin>>b[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m1;j++){
                c[i][j]=0;
            }
        }
    
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                for(k=0;k<m1;k++){
                    c[j][i]+=a[j][k]*b[k][i];
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m1;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    cout<<"Not Possible";
    return 0;
}

