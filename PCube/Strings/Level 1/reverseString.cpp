/*

reverse a string
eg: 5
    mohit
op: tihom

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,n;
    cin>>n;
    char c[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len/2;i++){
        if(c[i]!=c[len-i-1]){
            swap(c[i],c[len-i-1]);
        }
    }
    cout<<c;
    return 0;
}