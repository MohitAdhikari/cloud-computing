/*

check if the string follows order of characters defined by pattern or not

eg: misery
    mse
    op:YES
*/

#include<bits/stdc++.h>
using namespace std;
bool checkPos(char c[],char strt,char end){
    int i=0,pos1,pos2=-1;
    while(c[i]!=0){
        if(c[i]==strt){
            pos1=i;
        }
        if(c[i]==end&&pos2==-1){
            pos2=i;
        }
        i++;
    }
    if(pos1<pos2)
        return true;
    else
    {
        return false;
    }
    
}

int main(){
    int lend,i;
    char c[100],d[100];
    cin>>c;
    cin>>d;
    lend=strlen(d);
    //cout<<"yo";
    for(i=0;i<lend-1;i++){
        if(!checkPos(c,d[i],d[i+1])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}