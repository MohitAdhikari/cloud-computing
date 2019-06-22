/*

Simple Recursion - Simple Iteration
Given two relatively large numbers, A and B. 
We need to compute (ab)%1000000007

Input:

First line of input contains a single integer T.
Each of the next T lines contain two integers A and B.

Output:

Calculate the value of the given expression.

Constraints:

1<=T<=100000
1<=A<=1000000
1<=B<=10


 

SAMPLE INPUT 
2
10 10
1000000 10
SAMPLE OUTPUT 
999999937 
648999181

*/

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int powerfulpower(long long int a,long long int b){
    if(b==0)
        return 1;
    long long int p=powerfulpower(a,b/2);
    if(b%2==0){
        return p*p%MOD;
    }
    else
        return p*p%MOD*a%MOD;
}
int main(){
    long long int a,b,t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    cout<<powerfulpower(a,b)<<endl;
    }
}