/*

find the powerset of the given set.

 */

#include<bits/stdc++.h>
using namespace std;
void appendstr(char *c,char ch,int i){
    c[i]=ch;
    c[i+1]='\0';
}
void powerSet(char *s,int l,int r,char *out,int i){
    if(l==r){
        cout<<out<<endl;
        return;
    }
    powerSet(s,l+1,r,out,i);
    appendstr(out,s[l],i);
    powerSet(s,l+1,r,out,i+1);
}
int main(){
    char str[100]="abc",out[100]="";
    //cin>>str;
    int len=strlen(str);
    powerSet(str,0,len,out,0);
    return 0;
}