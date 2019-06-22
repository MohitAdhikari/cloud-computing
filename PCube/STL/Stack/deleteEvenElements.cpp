/* 

check if two stacks are same

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> s1,s2;
    int n,i,value;
    cout<<"Enter no. of elements";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>value;
        s1.push(value);
    }
    while(!s1.empty()){
        if(s1.top()%2==0){
            s2.push(s1.top());
        }
        s1.pop();
    }
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}