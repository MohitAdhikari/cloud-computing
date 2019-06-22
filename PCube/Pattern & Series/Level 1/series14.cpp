/*

find e^x using series 1+(x/1!)+(x^2/2!)+...
 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,f=1;
    double x,term=1,sum;
    cin>>x>>n;
    sum=1;
    for(i=2;i<=n;i++){
        term=(term*x)/f;
        sum+=term;
        f++;
    }
    cout<<sum;
}
