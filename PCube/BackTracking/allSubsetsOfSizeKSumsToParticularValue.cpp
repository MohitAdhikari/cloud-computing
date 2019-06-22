/*

find aall subsets if size k that sum to a particular value.

 */

#include<bits/stdc++.h>
using namespace std;

void subsetSum(int *s,int inputindx,int n,int r,int *outstr,int outindx,int value){
    if(outindx==r){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=outstr[i];
        }
        if(value==sum){
            for(int i=0;i<r;i++){
                cout<<outstr[i]<<" ";
            }
            cout<<endl;
        }
    }
    for(int i=inputindx;i<n;i++){

        outstr[outindx]=s[i];
        subsetSum(s,i+1,n,r,outstr,outindx+1,value);
        outstr[outindx]=s[i];
    }
}
int main(){
    int str[100],out[100],n,i,k,value;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>str[i];
    cin>>k>>value;
    subsetSum(str,0,n,k,out,0,value);
    return 0;
}