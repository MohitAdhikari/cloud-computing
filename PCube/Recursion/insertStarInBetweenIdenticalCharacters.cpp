/*


insert a star between a pair of identical characters.


 */
#include<bits/stdc++.h>
using namespace std;
void insertStar(char *s,char *outs,int i,int o){
    if(s[i]==0){
        outs[o]=0;
        return;
    }
    if(s[i]==s[i-1])
        outs[o++]='*';    
    outs[o]=s[i];
    insertStar(s,outs,i+1,o+1);
}
int main(){
    char str[]="abbccd",outstr[100];
    outstr[0]=str[0];
    insertStar(str,outstr,1,1);
    cout<<outstr;
    return 0;
}