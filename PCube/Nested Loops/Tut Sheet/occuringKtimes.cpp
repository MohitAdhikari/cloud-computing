/*

elements that appear k times in an array

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,count=1,k;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    sort(a,a+n);
    a[n]=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            count++;
        else{
            if(count==k)
                cout<<a[i]<<endl;
            count=1;
        }
    }
    return 0;
}