/*

print largest numeric substring
eg This345is78a1num12string
:- 345
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,j,strt=0,end=0,count=0;
    char c[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            if(c[j]>='0'&&c[j]<='9'){

            }
            else{
                if(end-strt<j-i){
                    end=j;
                    strt=i;
                    i=j-1;
                }
                
                break;
            } 
            if(j==len-1){
                if(end-strt<j-i){
                    end=j;
                    strt=i;
                }
            }     
        }
    }
    for(i=strt;i<end;i++){
        cout<<c[i];
    }
    return 0;
}