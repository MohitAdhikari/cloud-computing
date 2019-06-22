/*

distribute choclate.
m<n
n:choclate packets
m:students
each student get 1 packt
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,m,min=INT_MAX,index=-1;;
    cin>>n>>m;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<=n-m;i++){
        if((a[i+m-1]-a[i])<min){
            min=a[i+m-1]-a[i];
            index=i;
        }
        cout<<i+m-1<<" "<<i<<" "<<min<<endl;
    }
    if(index!=-1){
        for(i=index;i<index+m;i++)
            cout<<a[i]<<" ";
    }
    return 0;
}