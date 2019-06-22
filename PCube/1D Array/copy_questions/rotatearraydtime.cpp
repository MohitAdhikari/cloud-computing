/*

left rotate an array by d times

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d,temp,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>d;
    for(i=1;i<=d;i++){
        temp=a[0];
        for(j=0;j<n;j++)
            a[j]=a[j+1];
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}