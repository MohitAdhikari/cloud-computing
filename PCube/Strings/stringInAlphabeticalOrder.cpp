/*

check whether all the characters of a string are in alphabetical order or not.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i;
    char c[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len-1;i++){
        if(!(c[i]<=c[i+1]))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}