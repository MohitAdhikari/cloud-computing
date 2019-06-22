/*

COUNT INVERSIONS IN AN ARRAY

*/
#include<bits/stdc++.h>
using namespace std;

int invcount(int a[],int n){
    int i,j,count=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
                count++;
        }
    }
    return count;
}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<invcount(a,n);
    return 0;
}