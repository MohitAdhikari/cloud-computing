/*

Print next 10 terms of AZ,CY,EX,GW,IV....
 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a='A',b='Z';
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<a<<b<<",";
        a+=2;
        b-=1;  
        if(a>90)
            a='A';
        if(b<65)    
            b='Z';
    }
}
