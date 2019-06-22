/*

rotate a string 

 */

#include<bits/stdc++.h>
using namespace std;
void rotatestr(string &str,int i,int n){
    static int temp;
    if(n==0){
        temp=str[n];
        str[n]=str[n+1];
        return;
    }
    if(i==n){
        rotatestr(str,i,n-1);
        str[n]=temp;
        return;
    }
    rotatestr(str,i,n-1);
    str[n]=str[n+1];
    return;
}
int main(){
    string str;
    cin>>str;
    rotatestr(str,str.length()-1,str.length()-1);
    cout<<str;
    return 0;
}