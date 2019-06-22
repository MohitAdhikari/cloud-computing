/*

0
10
101
0101

*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,j,a=0;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<a;
            a=1-a;
        }
        cout<<endl;
    }
}
        
