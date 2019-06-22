/* 

check balanced parenthesis

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <char> s;
    char c[]="(){}{{({}[])[]}}";
    int len=strlen(c),i,f=0;
    for(i=0;i<len;i++){
        if(c[i]=='{'||c[i]=='('||c[i]=='['){
            s.push(c[i]);
        }
        else{
            //cout<<i<<" "<<s.top()<<" "<<c[i]<<endl;
            if(s.empty()){
                f=1;
                cout<<"1";
                break;
            }
            else if(c[i]=='}'){
                if(s.top()=='{'){
                    s.pop();
                }else{
                    f=1;
                    //cout<<"2";
                    break;
                }
            }
            else if(c[i]==')'){
                if(s.top()=='('){
                    s.pop();
                }
                else{
                    f=1;
                    //cout<<"3";
                break;
                }
            }
            else if(c[i]==']'){
                if(s.top()=='['){
                    s.pop();
                }else{
                    f=1;
                    //cout<<"4";
                break;
                }
            }
        }
    }
    if(f==1){
        cout<<"Not Balanced";
    }
    else
    {
        cout<<"Balanced";
    }
    
    return 0;
}