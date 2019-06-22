/*

check if a number is pallindrome or not

 */


#include<bits/stdc++.h>
using namespace std;
bool pallindrome(int a[],int m,int n){
    if(m>=n)
        return true;
    if(a[m]==a[n])
        pallindrome(a,m+1,n-1);
    else
        return false;
}
int main(){
    int n,a[11],i=0,j;
    cin>>n;
    while(n>0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    if(pallindrome(a,0,i-1))
        cout<<"PALLINDROME";
    else
        cout<<"NOT PALLINDROME";
    return 0;
}