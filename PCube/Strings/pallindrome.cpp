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
    int len;
    char c[100];
    cin>>c;
    if(pallindrome(c))
        cout<<"Yes";
    else{
        cout<<"No";
    }
    return 0;
}