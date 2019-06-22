/*

   sum of ap

*/
#include<bits/stdc++.h>
using namespace std;
int sumap(int a,int d,int n){
    if(n==0)
        return 0;
    return a+sumap(a+d,d,n-1);
}
int main(){
    int a,d,n;
    cin>>a>>d>>n;
    cout<<sumap(a,d,n);
    return 0;
}