/*

print largest substring with distinct char
eg abad
:- bad
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,j,strt=0,end=0,count[26];
    char c[100],d[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len;i++){
        memset(count,0,sizeof(count));
        for(j=i;j<len;j++){
            if(count[c[j]-'a']==0){
                d[j-i]=c[j];
                d[j-i+1]=0;
                count[c[j]-'a']++;
                if(end-strt<strlen(d)){
                    end=j;
                    strt=i;
                }
            }
            else
                break;      
        }
    }
    for(i=strt;i<=end;i++){
        cout<<c[i];
    }
    return 0;
}