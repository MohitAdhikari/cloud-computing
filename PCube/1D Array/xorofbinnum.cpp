/*

xor of two binary numbers

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
    for(i=0;i<n;i++){
        if(a[i]==b[i])
            cout<<"0 ";
        else
            cout<<"1 ";
    }
    return 0;
}