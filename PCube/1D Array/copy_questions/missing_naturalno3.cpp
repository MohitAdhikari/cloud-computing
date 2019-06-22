/*

given natural no. 1 2 3 4...N one is missing. find it.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n-1];
    for(i=0;i<n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-2;i++){
        if(a[i]+1!=a[i+1])
        {
            cout<<a[i]+1;
            return 0;
        }
    }
    cout<<a[n-2]+1;
    return 0;
}