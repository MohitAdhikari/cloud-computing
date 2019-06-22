/*

remove all adjacent duplicates

*/
#include<bits/stdc++.h>
using namespace std;

void removeadj(char c[],char d[],int i,int top){
    if(c[i]==0){
        d[++top]=0;
        return;
    }
    if(c[i]!=d[top]){
        top++;
        d[top]=c[i];
        removeadj(c,d,i+1,top);
    }
    else
        removeadj(c,d,i+1,top);
}
int main(){

    char c[100],d[100];
    cin>>c;
    d[0]=c[0];
    removeadj(c,d,1,0);
    cout<<d;
    return 0;
}