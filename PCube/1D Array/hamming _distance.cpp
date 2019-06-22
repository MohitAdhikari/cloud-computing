/*

hamming distance between two binary codes

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,dist=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++){
        if(a[i]!=b[i])
            dist++;
    }
    cout<<dist;
    return 0;
}