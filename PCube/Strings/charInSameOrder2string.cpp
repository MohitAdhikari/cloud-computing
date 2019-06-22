/*

check whether two strings contains same character in same order

eg classes
    cllaseess

*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int lenc,lend,i,j=1,k=1;
    char c[100],d[100],a[100],b[100];
    cin>>c;
    cin>>d;
    a[0]=c[0];
    b[0]=d[0];
    lenc=strlen(c);
    lend=strlen(d);
    for(i=1;i<lenc;i++){
        if(c[i]!=a[j-1]){
            a[j++]=c[i];
        }
    }
    for(i=1;i<lend;i++){
        if(d[i]!=b[k-1]){
            b[k++]=d[i];
        }
    }
    if(j==k){
        for(i=0;i<j;i++){
            if(a[i]!=b[i]){
               cout<<"NO";
             return 0;  
            }
        }
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}