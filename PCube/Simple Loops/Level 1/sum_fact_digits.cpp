/*

sum of factorial of digits of a number

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,digit,sum=0;
    long int fact;
    cin>>n;
    while(n>0){
        digit=n%10;
        fact=1;
        for(int i=digit;i>=1;i--){
            fact*=i;
        }
        sum+=fact;
        n=n/10;
    }
    cout<<sum;
    return 0;
}