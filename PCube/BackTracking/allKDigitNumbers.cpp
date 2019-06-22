/*

generate all substrings of 1,2,....9 of length k . 

*/
#include<bits/stdc++.h>
using namespace std;
void gstring(char *s,int indx,int k){
    if(indx==k){
        cout<<s<<endl;
        return;
    }
    for(int i=1;i<10;i++){
        s[indx]=i+'0';
        gstring(s,indx+1,k);
    }
}
int main(){
    int k;
    cin>>k;
    char str[k+1];
    str[k]=0;
    gstring(str,0,k);
    return 0;
}