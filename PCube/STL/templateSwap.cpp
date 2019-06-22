/*

basic template

 */

#include<bits/stdc++.h>
using namespace std;
template<class T>
T swaptmp(T &a,T &b){
    T tmp;
    tmp=a;
    a=b;
    b=tmp;
}
int main(int argc, const char** argv) {
    int a=1,b=2;
    float c=3,d=4;
    swaptmp(a,b);
    swaptmp(c,d);
    cout<<a<<" "<<b<<" ";
    cout<<c<<" "<<d;
    return 0;
}