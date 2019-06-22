/*

elements greater than mean 

*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    float mean,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++){
        if(mean<a[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}