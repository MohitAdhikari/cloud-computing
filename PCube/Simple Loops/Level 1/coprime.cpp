/*

   coprime : having hcf 1

*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    if(b>a){
        swap(a,b);
    }
    if(gcd(a,b)==1)
        cout<<"Co-prime";
    else
        cout<<"Not Co-prime";
    return 0;
}