/*

x*x<=n

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >>n;
    for(i=2;i*i<=n;i++);
    cout<<i-1;
    return 0;
}