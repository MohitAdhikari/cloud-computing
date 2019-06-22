/*

check if string is pallindrome or not.
eg: 5
    madam
op: Palindrome

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,n;
    cin>>n;
    char c[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len/2;i++){
        if(c[i]!=c[len-i-1]){
            cout<<"Not Pallindrome";
            return 0;
        }
    }
    cout<<"Pallindrome";    
    return 0;
}