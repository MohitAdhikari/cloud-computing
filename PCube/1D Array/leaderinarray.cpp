#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    max=a[n-1];
    cout<<max<<endl;
    for(i=n-2;i>=0;i--){
        if(a[i]>max){
            cout<<a[i]<<endl;
            max=a[i];
        }
    }
}