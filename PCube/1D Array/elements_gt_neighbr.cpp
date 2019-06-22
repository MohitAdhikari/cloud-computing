/*

elements greater than neighbours

*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,element;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n==1){
        cout<<a[0];
    }
    for(i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}