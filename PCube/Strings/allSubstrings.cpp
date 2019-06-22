/*

print all sub strings of a string 
eg: abcd
    a     b     c    d
    ab    bc    cd
    abc   bcd
    abcd 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,j;
    char c[100],d[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            d[j-i]=c[j];
            d[j-i+1]=0;
            cout<<d<<" ";
        }
        cout<<endl;
    }
    return 0;
}