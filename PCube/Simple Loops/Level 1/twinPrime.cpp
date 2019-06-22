/*

check whether two number are twin prime or not(having difference 2 or less)

*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,a,b,limit;
    cin>>a>>b;

    if((abs(a-b)<3)&&a%2&&b%2){
        limit=sqrt(a);
        for(i=2;i<=limit;i++){
            if(a%i==0){
                cout<<"NO";
                return 0;
            }

        }
        limit=sqrt(b);
        for(i=2;i<=limit;i++){
            if(b%i==0){
                cout<<"NO";
                return 0;
            }

        }
    }
    else
    {
        cout<<"NO";
        return 0;
    }
    
    cout<<"YES";
    return 0;
}