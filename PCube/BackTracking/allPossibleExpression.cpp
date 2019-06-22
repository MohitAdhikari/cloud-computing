/*

print all possible expression of given number.

*/
#include<bits/stdc++.h>
using namespace std;
void gstring(int *s,char operators[],char *word,int indx,int k){
    int i=0;
    if(indx==k){
        cout<<word<<endl;
        return;
    }
    if(indx%2==0){
            word[indx]='0'+s[indx/2];
            gstring(s,operators,word,indx+1,k);
    }
    else{
        while(operators[i]!=0){
            word[indx]=operators[i];
            gstring(s,operators,word,indx+1,k);
            i++;
        }
    }
}
int main(){
    int n,count=0,i,size;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    size=2*n-1;
    char expression[size],operators[]="+-*/";
    expression[size]=0;
    gstring(a,operators,expression,0,size);
    return 0;
}