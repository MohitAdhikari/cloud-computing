/*

    calaculate log(n!) recursively.

*/
#include<bits/stdc++.h>
using namespace std;
double sumlog(int n){
    if(n==0)
        return 0;
    else
        return log(n)+sumlog(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumlog(n);
    return 0;
}