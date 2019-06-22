/*

Implement Quick Sort

 */
#include<bits/stdc++.h>
using namespace std;
int qpartition(int a[],int l,int r){
    int pivot=a[r],i=l-1,j;
    for(j=l;j<=r-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void quicksort(int a[],int l,int r)
{
    if(l<r){
        int p=qpartition(a,l,r);
//     int p=(l+r)/2;
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}