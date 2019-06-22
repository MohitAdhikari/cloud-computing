/*

elements only present in first array

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    i=0;
    j=0;
    while(i<n&&j<n)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]==b[j]){
            while(i<n-1&&a[i]==a[i+1])
                i++;
            j++;
            if(a[i]!=b[j])
                i++;
        }
        else
            j++;
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    return 0;
}