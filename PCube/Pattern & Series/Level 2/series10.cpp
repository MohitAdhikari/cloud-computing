/*

1,4,15,24,45,60,91,112

*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,a=1,b=2;
    cin>>n;
    if(n%2==0){
        cout<<n*(b+4*((n-1)/2));
    }
    else{
        cout<<n*(a+4*((n-1)/2));
    }
    return 0;
}