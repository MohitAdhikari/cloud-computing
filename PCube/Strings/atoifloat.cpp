/*

convert a string into float if possible

*/

#include<bits/stdc++.h>
using namespace std;

float myatoi(char c[]){

    int i=0,f=0,pwr=0;
    float value=0;
    
    while(c[i]!=0){
        if(c[i]=='.'&&f==0){
            f=1;
            pwr--;
        }
        else if(c[i]=='.'){
            return -1;
        }
        else if(c[i]<='9'&&c[i]>='0'){
            value=value*10+(c[i]-'0');
        }
        else
        {
            return -1;
        }
        if(f==1)
            pwr++;
        i++;
        //cout<<f<<" "<<pwr<<endl;
    }
    //cout<<value<<" "<<pwr<<endl;
    return value/pow(10,pwr);
}
int main(){
    char c[100];
    cin>>c;
    cout<<myatoi(c);
    return 0;
}