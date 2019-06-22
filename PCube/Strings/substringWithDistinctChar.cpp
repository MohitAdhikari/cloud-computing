/*

print all substring with distinct char
eg abad
:- a ab b ba bad bad 
:- aba x
   abad x
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,j,count[26];
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
                cout<<d<<endl;
            }
            else
                break;      
        }
    }
    return 0;
}