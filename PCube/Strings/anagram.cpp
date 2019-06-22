/*

check whether two strings are anagram of each other or not
eg: silent listen

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,len;
    char c[100],d[100];
    cin>>c;
    cin>>d;
    len=strlen(c);
    if(len==strlen(d)){
        sort(c,c+len);
        sort(d,d+len);
        for(i=0;i<len;i++){
            if(c[i]!=d[i]){
                cout<<"No";
                return 0;
            }
        }
    }
    else{
        cout<<"No";
        return 0;
    }
    cout<<"Yes";
    return 0;
}