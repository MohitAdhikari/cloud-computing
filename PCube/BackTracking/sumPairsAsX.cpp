/*

given an array and a number x check for pair in array with sum as x,

*/
#include<bits/stdc++.h>
using namespace std;
int c=0;
void gstring(int *s,int *a,int indx,int k,int x,int m){
    if(m==2){
        if(s[0]+s[1]==x){
            cout<<s[0]<<" "<<s[1]<<endl;
        }
        return;
    }
    for(int i=indx;i<k;i++){
        s[m]=a[i];
        gstring(s,a,i+1,k,x,m+1);
    }
}
int main(){
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    int str[2];
    gstring(str,a,0,n,x,0);
    return 0;
}