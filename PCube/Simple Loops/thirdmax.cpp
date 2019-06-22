#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max[3];
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n<=2)
        cout<<"Not enough elements";
    else{
        max[0]=a[0];
        max[1]=a[1];
        max[2]=a[2];
        sort(max,max+3);
        for(i=3;i<n;i++){
            if(a[i]>=max[2]){
                max[0]=max[1];
                max[1]=max[2];
                max[2]=a[i];
            }
            else if(a[i]>=max[1]){
                max[0]=max[1];
                max[1]=a[i];
            }
            else if(a[i]>max[0])
                max[0]=a[i];
        }
        cout<<max[0];
    }
}