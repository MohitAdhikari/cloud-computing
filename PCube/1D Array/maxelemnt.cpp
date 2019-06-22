/*

max element in an array

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=INT_MIN;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}