/*

1
3 2
6 5 4
10 9 8 7

*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,n,rowinc=2,counter=1,temp;
    cin>>n;
    for(i=1;i<=n;i++){
        temp=counter;
        for(j=1;j<=i;j++){
            cout<<temp;
            temp--;
        }
        cout<<endl;
        counter=counter+rowinc;
        rowinc++;
   }
}
