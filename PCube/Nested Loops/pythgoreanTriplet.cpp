/*

find any pythgorean triplet a,b,c in array such tha a^2+b^2=c^2

*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,i,j,k;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                if(i!=j&&i!=k&&j!=k){
                    if((a[i]*a[i]+a[j]*a[j])==a[k]*a[k]){
                        cout<<"Present";
                        return 0;
                    }
                }
            }
        } 
    }
    cout<<"Not Present";
    return 0;
}