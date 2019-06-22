/*

find pos where left sum is equal to right sum

*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,i,j,lsum=0,rsum=0;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    lsum=a[0];
    for(i=2;i<n;i++)
        rsum+=a[i];
    for(i=1;i<n-1;i++){
        
        if(lsum==rsum){
            cout<<a[i];
            return 0;
        }
        lsum+=a[i];
        rsum-=a[i+1];
    }
    cout<<"No such element";
    return 0;
}