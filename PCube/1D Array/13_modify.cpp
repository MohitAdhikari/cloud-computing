/*

modify arrays a/c to condition
1 both elements even modify first by sum
2 both odd so modify first by product of both elements

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++){
        if(a[i]%2!=0&&b[i]%2!=0){
            a[i]=a[i]*b[i];
        }
        else if(a[i]%2==0&&b[i]%2==0){
            a[i]=a[i]+b[i];
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}