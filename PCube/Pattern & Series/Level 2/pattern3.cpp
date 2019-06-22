/*

    n=2
    1 2 5 6
      3 4

    n=4
    1 2 3 4 17 18 19 20
      5 6 7 14 15 16
        8 9 12 13
         10 11

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first=1,last,n,i,j,loopcount,templast,nspace=0;
    cin>>n;
    last=n*(n+1);
    loopcount=2*n;
    for(i=1;i<=n;i++){
        templast=(last-loopcount/2)+1;
        for(j=1;j<=nspace;j++)
            cout<<" ";
        for(j=1;j<=loopcount;j++){
            if(j<=loopcount/2){
                cout<<first<<" ";
                first++;
            }
            else
            {
                cout<<templast<<" ";
                templast++;
            }
            
        }
        cout<<endl;
        last=(last-loopcount/2);
        loopcount-=2;
        nspace+=2;
    }
    return 0;
}