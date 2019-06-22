/*

find nth term of gp 2,4,8,16,32,...
 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a=2,r=2;
    cin>>n;
    cout<<a*pow(r,n-1);
}
