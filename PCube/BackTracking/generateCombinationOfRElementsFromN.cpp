/*

print all possible ways of selecting r items from n items

 */

#include<bits/stdc++.h>
using namespace std;

void combinations(char *s,int inputindx,int n,int r,char *out,int outindx){
    if(outindx==r){
        cout<<out<<endl;
        return;
    }
    if(inputindx==n)
        return;
    combinations(s,inputindx+1,n,r,out,outindx);
    out[outindx]=s[inputindx];
    combinations(s,inputindx+1,n,r,out,outindx+1);
}
int main(){
    char str[100],out[100]="";
    cin>>str;
    int r;
    cin>>r;
    int len=strlen(str);
    combinations(str,0,len,r,out,0);
    return 0;
}