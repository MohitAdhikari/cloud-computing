/*

nth term of series 1,1,2,3,4,9,8,27,16,81,32,243.....

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2)
        cout<<pow(2,(n+1)/2-1);
    else
        cout<<pow(3,n/2-1);
    return 0;
}