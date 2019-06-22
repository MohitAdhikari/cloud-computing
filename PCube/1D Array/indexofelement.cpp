/*

Index of element in an array

*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,element;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>element;
    for(i=0;i<n;i++){
        if(a[i]==element){
            cout<<i;
            break;
        }
    }
    if(i==n)
        cout<<"No such element";
    return 0;
}