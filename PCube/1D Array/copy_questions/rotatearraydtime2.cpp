/*

left rotate an array by d times in O(n)

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
    for(i=0;i<d/2;i++){
        temp=a[i];
        a[i]=a[d-i-1];
        a[d-i-1]=temp;
    }
    for(i=d;i<(n+d)/2;i++){
        temp=a[i];
        a[i]=a[n-1-(i-d)];
        a[n-1-(i-d)]=temp;
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}