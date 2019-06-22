/*

convert a string into integer if possible

*/

#include<bits/stdc++.h>
using namespace std;

int myatoi(char c[]){

    int i=0,value=0;
    
    while(c[i]!=0){
        if(c[i]<='9'&&c[i]>='0'){
            value=value*10+(c[i]-'0');
        }
        else
        {
            return -1;
        }
        i++;
    }
    return value;
}
int main(){
    char c[100];
    cin>>c;
    cout<<myatoi(c);
    return 0;
}