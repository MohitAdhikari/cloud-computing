/*

MAX FREQ OF A ELEMENT

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,count=1,max=INT_MIN,index;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    a[n]=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            count++;
        else{
            if(count>max){
                max=count;
                index=i;
            }
            count=1;
        }
    }
    cout<<a[index];
    return 0;
}