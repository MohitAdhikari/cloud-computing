/*

count number of words in string

 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,count=0;
    cin>>len;
    char c[100];
    cin.ignore(1,'\n');
    cin.getline(c,len+1);
    for(i=1;i<=len;i++){
        if((c[i]==32&&c[i-1]!=32)||(c[i]==0&&c[i-1]!=32))
            count++;
    }
    cout<<count;
    return 0;
}