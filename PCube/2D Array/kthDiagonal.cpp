/*

print kth diagonal

*/

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int m,n,i,j,k,a,b;
    cin>>m>>n;;
    int arr[m][n];
    cin>>k;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    a=m;
    b=0;
    if(a-k<0)
    {
        b=abs(a-k);
        a=0; 
    }
    else{
        a=a-k;
    }
    //cout<<a<<" "<<b<<endl;
    while(a<m&&b<n){
        //cout<<a<<" "<<b<<endl;
        cout<<arr[a][b]<<" ";
        a++;
        b++;
    }
    return 0;
}

