/*

check if a float is valid or not.
eg: 12.34e-4

op:valid

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,n,f=0,j;
    char c[100];
    cin>>c;
    len=strlen(c);
    for(i=0;i<len;i++){
        if(c[i]=='.'&&f==0){
            f=1;
        }
        else if(c[i]=='.'){
            cout<<"Invalid";
            return 0;
        }
        else if(c[i]=='e'&&f==1){
            i++;
            if(c[i]=='-'){
                i++;
            }
            for(j=i;j<len;j++){
            if(c[i]>='0'&&c[i]<='9')
                continue;
            else
            {
                cout<<"Invalid";    
                return 0;
            }
            }
            i=len;
            continue;
        }
        else if(c[i]>='0'&&c[i]<='9'){
            continue;
        }
        else{
            cout<<"Invalid";    
            return 0;
        }

    }
    cout<<"Valid";    
    return 0;
}