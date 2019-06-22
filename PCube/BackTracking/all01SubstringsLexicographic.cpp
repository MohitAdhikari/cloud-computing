/*

generate all substrings of 0,1 of length k in lexicographic order. 

*/
#include<bits/stdc++.h>
using namespace std;
void gstring(char *s,int i,int k){
    if(i==k){
        cout<<s<<endl;
        return;
    }
    s[i]='0';
    gstring(s,i+1,k);
    s[i]='1';
    gstring(s,i+1,k);
}
int main(){
    int k;
    cin>>k;
    char str[k+1];
    str[k]=0;
    gstring(str,0,k);
    return 0;
}