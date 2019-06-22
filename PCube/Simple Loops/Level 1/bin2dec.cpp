/*

convert a binary number to decimal

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[20],i=0;
    cin>>n;
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<a[j]<<" ";
    return 0;
}