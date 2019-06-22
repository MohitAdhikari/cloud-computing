/*

count no. of elements in stack

*/

#include<bits/stdc++.h>
using namespace std;

int main(int argc, const char** argv) {
    stack <int> s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    int count=0;
    while(!s.empty()){
        count++;
        s.pop();
    }
    cout<<count;
    return 0;
}