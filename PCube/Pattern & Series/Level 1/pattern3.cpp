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
    int i,n,j,counter=1;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(counter%2==0)
                cout<<"1";
            else
                cout<<"0";
            counter++;
        }
        cout<<endl;
    }
}
        
