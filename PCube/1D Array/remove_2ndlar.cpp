/*

remove second largest element from an array assuming no dups.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,max=INT_MIN,smax;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax)
            smax=a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==smax)
            {
                for(j=i;j<n-1;j++)
                    a[i]=a[i+1];
                break;
            }
    }
    n--;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}