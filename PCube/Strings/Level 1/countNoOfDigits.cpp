/*

count number of digits in a string
eg: 2RAMAN01Classes4
op: 4

 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,count=0;
    char c[100];
    cin>>len;
    for(i=0;i<len;i++)
        cin>>c[i];
    c[i]=0;
    for(i=0;i<len;i++){
        if(c[i]<='9'&&c[i]>='0')
            count++;
    }
    cout<<count;
    return 0;
}