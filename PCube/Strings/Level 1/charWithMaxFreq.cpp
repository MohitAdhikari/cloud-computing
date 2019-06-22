/*

print charcter with max occurance.
eg: raman
op: a

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,count[26]={0},max=0,indx=-1;
    char c[100],out;
    cin>>c;
    len=strlen(c);
    for(i=0;i<len;i++)
        count[c[i]-'a']++;
    
    for(i=0;i<26;i++){
        if(count[i]>max){
            max=count[i];
            indx=i;
        }
    }
    out=indx+'a';
    cout<<out;
    return 0;
}