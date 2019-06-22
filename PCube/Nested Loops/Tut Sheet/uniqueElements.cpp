/*

unique elements in an array

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,count=1;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    a[n]=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            count++;
        else{
            cout<<a[i]<<endl;
            count=1;
        }
    }
    return 0;
}