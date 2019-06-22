/*

remove all adjacent duplicates

*/
#include<bits/stdc++.h>
using namespace std;

void reversepos(char c[],int i,int j){
    //cout<<i<<" "<<j<<endl;
    int it;
    for(it=i;it<(i+j)/2;it++){
        //cout<<it<<" "<<j-1-i+it<<endl;
        swap(c[it],c[j-1+i-it]);
    }
}
void reverseWords(char c[],int strt,int end){
    if(c[end]==0){
        reversepos(c,strt,end);
        return;
    }
    if(c[end]==32){
        if(strt<end)
        reversepos(c,strt,end);
        strt=end+1;
        reverseWords(c,strt,end+1);
        return;
    }
    reverseWords(c,strt,end+1);
}
int main(){
    char c[100];
    cin.getline(c,100);
    reverseWords(c,0,0);
    cout<<c;
    return 0;
}