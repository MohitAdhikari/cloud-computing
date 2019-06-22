/*

generate all substrings of 0,1 of length k without consecutive ones. 

*/
#include<bits/stdc++.h>
using namespace std;
void gstring(char *s,int i,int k){
    if(i==k){
        cout<<s<<endl;
        return;
    }
    if(s[i-1]=='1'){
        s[i]='0';
        gstring(s,i+1,k);
    }
    else{
        s[i]='0';
        gstring(s,i+1,k);
        s[i]='1';
        gstring(s,i+1,k);
    }
}
int main(){
    int k;
    cin>>k;
    char str[k+1];
    str[k]=0;
    str[0]='0';
    gstring(str,1,k);
    str[0]='1';
    gstring(str,1,k);
    return 0;
}