/*

count pairs such tha x^y > y^x

*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,i,j,count=0;
    cin>>n;
    int a[n],b[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(pow(a[i],b[j])>pow(b[j],a[i])){
                //cout<<a[i]<<" "<<a[j]<<endl;
                count++;
            }
        }
        
    }
    cout<<count;
    
    return 0;
}