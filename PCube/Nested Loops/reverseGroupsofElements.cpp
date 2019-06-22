/*

reverse every subarray of k group elements

*/
#include<bits/stdc++.h>
using namespace std;
void reversearr(int a[],int start,int end){
    int i,temp;
    for(i=start;i<=(start+end)/2;i++){
        temp=a[i];
        a[i]=a[end-i+start];
        a[end-i+start]=temp;
        
    }
}

int main(){
    int n,i,k;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for ( i = 0; i <n; i=i+k)
    {
        if(i+k-1<n)
            reversearr(a,i,i+k-1);
        else
            reversearr(a,i,n-1);
    }
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}