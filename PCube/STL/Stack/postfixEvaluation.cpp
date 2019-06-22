/*

evaluate postfix expression.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,ans,x,y;
    string str,op="";
    cin>>str;
    stack <int> s;
    for(i=0;i<str.length();i++){
        if(str[i]>='0'&&str[i]<='9'){
            s.push(str[i]-'0');
        }
        else{
            y=s.top();
            s.pop();
            x=s.top();
            s.pop();
            if(str[i]=='+'){
                s.push(x+y);
            }
            else if(str[i]=='-'){
                s.push(x-y);
            }
            else if(str[i]=='/'){
                s.push(x/y);
            }
            else if(str[i]=='*'){
                s.push(x*y);
            }
            else if(str[i]=='^'){
                s.push(x^y);
            }
        }
    }
    cout<<s.top();
    return 0;
}