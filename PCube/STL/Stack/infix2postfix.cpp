/*

convert infix expression to postfix

*/

#include<bits/stdc++.h>
using namespace std;
int precedence[6][6]={{1,0,1,0,0,0},
                      {1,1,1,0,1,1},
                      {1,0,1,0,0,0},
                      {1,1,1,0,1,1},
                      {1,1,1,0,1,1},
                      {1,1,1,0,1,1}};
int main(){
    int i;
    string str,op="";
    cin>>str;
    stack <char> s;
    unordered_map <char,int> m;
    m['+']=0;
    m['*']=1;
    m['-']=2;
    m['^']=3;
    m['/']=4;
    m['%']=5;
    for(i=0;i<str.length();i++){
        if(str[i]>='0'&&str[i]<='9'){
            op+=str[i];
        }
        else if(s.empty()||s.top()=='('){
            s.push(str[i]);
        }
        else if(!s.empty()){
            if(str[i]==')'){
                while(!s.empty()&&s.top()!='('){
                    op+=s.top();
                    s.pop();
                }
                s.pop();
            }
            else if(str[i]=='('){
                s.push(str[i]);
            }
            else if(precedence[m[s.top()]][m[str[i]]]){
                while(!s.empty()&&precedence[m[s.top()]][m[str[i]]]){
                    op+=s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
            else{
                s.push(str[i]);
            }
        }
    }
    while(!s.empty()){
        op+=s.top();
        s.pop();
    }
    cout<<op;
    return 0;
}