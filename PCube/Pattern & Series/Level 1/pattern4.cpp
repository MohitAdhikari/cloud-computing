/*

1
3 2
4 5 6
10 9 8 7

*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,n,rowinc=2,counter=1,temp=1;
    cin>>n;
    for(i=1;i<=n;i++){
       if(i%2==0){
            temp=counter;
            for(j=1;j<=i;j++){
                cout<<temp;
                temp--;
            }
            temp=counter+1;
        }
        else{
            for(j=1;j<=i;j++){
                cout<<temp;
                temp++;
            }
        }
        cout<<endl;
        counter=counter+rowinc;
        rowinc++;
   }
}
