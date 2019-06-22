/*

elements within a given range

*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,uplim,lolim,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>lolim>>uplim;
    for(i=0;i<n;i++){
        if(lolim<=a[i]&&uplim>=a[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}