/*

sum of 2k terms of series 2,10,6,20,18,40,54,80...
 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,k,n,a=2,b=10,sum;
    cin>>k;
    n=2*k;
    sum=a+b;
    for(i=3;i<=n;i++){
        if(i%2==0){
            b*=2;
            sum+=b;
        }
        else{
            a*=3;
            sum+=a;
        }
    }
    cout<<sum;       
}
