/*

calculate factorial of a number recursively

 */


#include<bits/stdc++.h>
using namespace std;
long int fact(long int n){
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    long int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}