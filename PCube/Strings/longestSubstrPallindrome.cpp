/*

check whether a string is pallindrome or not
*/

#include<bits/stdc++.h>
using namespace std;

bool pallindrome(char *c){
    int i=0,len;
    len=strlen(c);
    for(i=0;i<len/2;i++){
        if(c[i]!=c[len-i-1])
            return false;
    }
    return true;
}
int main(){
    int len,i,j,strt=0,end=0;
    char c[100],d[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            d[j-i]=c[j];
            d[j-i+1]=0;
            if(pallindrome(d)){
                if(end-strt<strlen(d)){
                    end=j;
                    strt=i;
                }
            }
        }
    }
    for(i=strt;i<=end;i++){
        cout<<c[i];
    }
    return 0;
}