/*
min no of comaprisions for min and max
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=INT_MAX,min=INT_MIN;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    if(a[0]>a[1]){
        max=a[0];
        min=a[1];
    }
    else{
        max=a[1];
        min=a[0];
    }

    for(i=3;i<n;i=i+2){
        if(a[i-1]>a[i]){
            if(max<a[i-1])
                max=a[i-1];
            if(min>a[i])
                min=a[i];
        }
        else{
            if(min>a[i-1])
                min=a[i-1];
            if(max<a[i])
                max=a[i];
        }
    }
    if(n%2){
        if(a[n-1]>max)
            max=a[n-1];
        else if(a[n-1]<min)
            min=a[n-1];    
    }
    cout << min <<" "<< max;
}