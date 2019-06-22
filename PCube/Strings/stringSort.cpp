/*

sort a string using count sort in O(n)

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,count[26]={0};
    char c[100],out[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len;i++)
        count[c[i]-'a']++;
    
    for(i=1;i<26;i++)
        count[i]+=count[i-1];
    
    for(i=len-1;i>=0;i--){
        out[count[c[i]-'a']]=c[i];
        count[c[i]-'a']--;
    }
    for(i=1;i<=len;i++)
        cout<<out[i]<<" ";
    return 0;
}