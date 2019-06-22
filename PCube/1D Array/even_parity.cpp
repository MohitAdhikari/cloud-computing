/*

find parity bits of binary number by even parity.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            count++;
    }
    if(count%2==0)
        cout<<"0";
    else
        cout<<"1";
    return 0;
}