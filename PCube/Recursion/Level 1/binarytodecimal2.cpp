/*

    convert dec to bin

*/
#include<bits/stdc++.h>
using namespace std;
int b2d(char *c,int last,int exp,int n){
    if(last==n)
        return 0;
    return (c[last]-'0')*pow(2,exp)+b2d(c,last+1,exp-1,n);
}
int main(){
    char c[]="1101";
    cout<<b2d(c,0,strlen(c)-1,strlen(c));
    return 0;
}