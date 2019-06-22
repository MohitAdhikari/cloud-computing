/*

find whether array is pallindrome or not

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            cout<<"Not Pallindrome";
            return 0;
        }
    }
    cout<<"Pallindrome";
    return 0;
}