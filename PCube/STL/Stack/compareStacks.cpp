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
    cout<<"Enter no. of elements";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>value;
        s2.push(value);
    }
    while((!s1.empty())&&(!s2.empty())){
        if(s1.top()!=s2.top()){
            cout<<"Not Equal";
            return 0;
        }
        s1.pop();
        s2.pop();
    }
    if((!s1.empty())||(!s2.empty())){
        cout<<"Not Equal";
        return 0;
    }
    cout<<"Equal";
    return 0;
}