/*

Integer N as input Magical pattern

N....32123....N
........
33332123333
22222122222
11111111111
22222122222
33332123333
.........
N....32123....N

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
            if(j<=i)
                cout<<j;
            else
                cout<<i;
        }
        for(j=2;j<=n;j++){
            if(j<=i)
                cout<<j;
            else
                cout<<i;
        }
        cout<<endl;
    }
    for(i=2;i<=n;i++){
        for(j=n;j>=1;j--){
            if(j<=i)
                cout<<j;
            else
                cout<<i;
        }
        for(j=2;j<=n;j++){
            if(j<=i)
                cout<<j;
            else
                cout<<i;
        }
        cout<<endl;
    }
    return 0;
}