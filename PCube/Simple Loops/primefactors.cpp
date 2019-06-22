#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,limit,counter;
    cin >>n;
    limit=sqrt(n);
    for(i=2;i<=limit;i++){
        counter=0;
        while(n%i==0){
            n=n/i;
            counter++;
        }
        if(counter)
        cout<<i<<"^"<<counter<<endl;
    }
    if(n>1)
        cout<<n<<"^1";
    return 0;
}