/*

print all possible expression of given number that evaluates to target value.

*/
#include<bits/stdc++.h>
using namespace std;

int precedence[6][6]={{1,0,1,0,0,0},
                      {1,1,1,0,1,1},
                      {1,0,1,0,0,0},
                      {1,1,1,0,1,1},
                      {1,1,1,0,1,1},
                      {1,1,1,0,1,1}};

int postfixeval(string str){
    int i,x,y;
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
    return s.top();
}

int infixtopost(char c[]){
    int i=0;
    string str="",op="";
    while(c[i]!=0){
        str+=c[i];
        i=i+1;
    }
    //cout<<str<<endl;
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
    return postfixeval(op);
}

void gstring(int *s,char operators[],char *word,int indx,int k,int x){
    int i=0;
    if(indx==k){
        if(infixtopost(word)==x)
            cout<<word<<endl;
        return;
    }
    if(indx%2==0){
            word[indx]='0'+s[indx/2];
            gstring(s,operators,word,indx+1,k,x);
    }
    else{
        while(operators[i]!=0){
            word[indx]=operators[i];
            gstring(s,operators,word,indx+1,k,x);
            i++;
        }
    }
}
int main(){
    int n,count=0,i,size,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    size=2*n-1;
    char expression[size],operators[]="+-*/";
    expression[size]=0;
    gstring(a,operators,expression,0,size,x);
    return 0;
}