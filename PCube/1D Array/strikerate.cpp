/*

strike rate of a batsman given runs and balls faced

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    float max=INT_MIN,sr;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++){
        sr=float(a[i])/b[i];
        sr*=100;
        if(max<sr)
            max=sr;
    }
    cout<<max;
    return 0;
}