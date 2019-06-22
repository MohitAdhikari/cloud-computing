/*

covert a string from lower case to uppper case

 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i;
    char c[100];
    cin>>len;
    for(i=0;i<len;i++)
        cin>>c[i];
    c[i]=0;
    for(i=0;i<len;i++){
        if(c[i]<='z'&&c[i]>='a')
            c[i]=c[i]-32;
    }
    for(i=0;i<len;i++)
        cout<<c[i];
    return 0;
}