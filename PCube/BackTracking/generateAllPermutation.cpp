/*

find all permutaions of given strings.

 */

#include<bits/stdc++.h>
using namespace std;
void permute(char *s,int l,int r){
    if(l==r){
        cout<<s<<endl;
    }
    for(int i=l;i<r;i++){
        swap(s[i],s[l]);
        permute(s,l+1,r);
        swap(s[i],s[l]);
    }
}
int main(){
    char str[100];
    cin>>str;
    int len=strlen(str);
    permute(str,0,len);
    return 0;
}