/*

find all permutations of given strings with duplicate.

 */

#include<bits/stdc++.h>
using namespace std;
int c=0;
void permute(char *s,int l,int r){
    if(l==r){
        c++;
        cout<<s<<endl;
    }
    for(int i=l;i<r;i++){
        //cout<<l<<" "<<i<<" "<<endl;
        if(i==l||(i!=l&&s[i]!=s[l]))
        {
            swap(s[i],s[l]);
            permute(s,l+1,r);
            swap(s[i],s[l]);
        }
    }
}
int main(){
    char str[100];
    cin>>str;
    int len=strlen(str);
    str[len]=0;
    permute(str,0,len);
    cout<<c;
    return 0;
}