/*

    calculate how many choclate did a person it if he can get more chocolates by wrappers

*/
#include<bits/stdc++.h>
using namespace std;

int mywrap(int nochoc,int wrap){
    if(nochoc<wrap)
        return 0;
    int newno=nochoc/wrap;
    return newno+mywrap((nochoc%wrap)+newno,wrap);
}

int f(int money,int price,int wrap){
    int nochoc=money/price;
    return nochoc+mywrap(nochoc,wrap);
}

int main(){
    int money=20,price=4,wrap=3;
    cout<<f(money,price,wrap);
    return 0;
}