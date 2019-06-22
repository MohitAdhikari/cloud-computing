/*

sin x=x-(x^3/3!)+(x^5/5!)-(x^7/7!)+.... 
 
*/


#include<iostream>
using namespace std;
int main()
{
    int i,n;
    double x,term,ans,f=1;
    cin>>x>>n;
    x=(x*3.1415)/180;
    ans=x;
    term=x;
    for(i=2;i<=n;i++)
    {
        term=(term*x*x*(-1))/((f+1)*(f+2));
        ans+=term;
        f+=2;
    }
    cout<<ans;
}
