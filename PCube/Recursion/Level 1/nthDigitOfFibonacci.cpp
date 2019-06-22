/*

   print nth digit of fibonacci

*/
#include<bits/stdc++.h>
using namespace std;
int nthfibn(int n){
    if(n==1||n==2)
        return n-1;
    return nthfibn(n-1)+nthfibn(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<nthfibn(n);
    return 0;
}