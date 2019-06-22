/*

find parity bits of binary number by even parity.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,zeros=0,ones=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0)
            zeros++;
        else
            ones++;
    }
    i=0;
    while(zeros>0&&ones>0){
        if(i%2==0){
            a[i++]=0;
            zeros--;
        }
        else{
            a[i++]=1;
            ones--;
        }  
    }
    while(zeros>0){
        a[i++]=0;
        zeros--;
    }
    while(ones>0){
        a[i++]=1;
        ones--;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}