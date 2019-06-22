/*

find element such that all on left are smaller and right are greater

*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,i,j,flag=0;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++){
        flag=0;
        for(j=0;j<i;j++){
            if(a[j]>a[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<a[i];
            return 0;
        }
        //cout<<i<<" "<<flag<<endl;
    }
    cout<<"No such element";
    return 0;
}