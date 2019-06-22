/* 

find the minimum element

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> s;
    int n,i,f=0,value,min=INT_MAX;
    cout<<"Enter no. of elements";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>value;
        s.push(value);
    }
    while(!s.empty()){
        if(min>s.top()){
            min=s.top();
        }
        s.pop();
    }
    cout<<min;
    return 0;
}