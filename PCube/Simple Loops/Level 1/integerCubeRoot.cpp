/*

find int cube root of a number. x*x*x<=n

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,i;
    cin>>n;
    for ( i = 0; i*i*i<=n; i++);
    cout<<i-1;    
    return 0;
}