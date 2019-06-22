/*

   check whether string is pallindrome or not.

*/
#include<bits/stdc++.h>
using namespace std;
int pallindrome(string str,int f,int n){
    if(f>=n)
        return 1;
    if(str[f]==str[n])
        pallindrome(str,f+1,n-1);
    else
        return 0;    
}
int main(){
    string str;
    getline(cin,str);
    if(pallindrome(str,0,str.length()-1))
        cout<<"Pallindrome";
    else
        cout<<"Not a Pallindrome";
    return 0;
}