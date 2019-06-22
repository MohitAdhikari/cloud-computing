/*

    convert number is prime or no

*/
#include<bits/stdc++.h>
using namespace std;
int isprime(int num,int i){
    if(i==1)return 0;
    if(i*i>num)
        return 1;
    if(num%i==0)
        return 0;
    isprime(num,i+1);
}
int main(){
    int n;
    cin>>n;
    cout<<isprime(n,2);
    return 0;
}