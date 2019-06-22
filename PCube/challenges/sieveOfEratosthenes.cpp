/*

Give me PRIME
Given an integer N. You have to print series of prime number from 2 to N. 

Constraint:

2<=N<=106

Input:

First line contain an integer N.

Output:

Print the prime series from 2 to N

Example:

Input:

10

Output:

2 3 5 7

Sample Input
20
Sample Output
2 3 5 7 11 13 17 19 

*/

#include<bits/stdc++.h>
using namespace std;
bool b[1000000000];
int main(){
    long int n,i,j;
    cin>>n;
    long int a[n]={0};
    for(i=2;i<=n;i++){
        if(a[i]==0){
            for(j=2*i;j<=n;j=j+i){
                a[j]=1;
                
            }
        }
    }
    for(i=2;i<=n;i++){
        if(a[i]==0)
            cout<<i<<" ";
    }
    return 0;
}