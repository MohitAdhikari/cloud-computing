/*

1
-2 3
4 -5 6
-7 8 -9 10

*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,j,counter=1;
    cin >> n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=1;j<=i;j++){
                if(j%2!=0)
                    cout<<(-1)*counter;
                else
                    cout<<counter;
                counter++;
            }
            cout<<endl;
        }
        else{
            for(j=1;j<=i;j++){
                if(j%2==0)
                    cout<<(-1)*counter;
                else
                    cout<<counter;
                counter++;
            }
            cout<<endl;
        }
    }
}
   
