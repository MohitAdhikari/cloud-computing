/*

   reverse an array

*/

#include<bits/stdc++.h>
using namespace std;
void reversearr(int a[],int f,int n){
    if(f>=n)
        return;
    int temp=a[f];
    a[f]=a[n];
    a[n]=temp;
    reversearr(a,f+1,n-1); 
}

int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    reversearr(a,0,n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
