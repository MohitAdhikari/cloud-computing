/*

print all possible words from phone digits of k length.

*/
#include<bits/stdc++.h>
using namespace std;
void gstring(int *s,char phone[][5],char *word,int indx,int k){
    int i=0;
    if(indx==k){
        cout<<word<<endl;
        return;
    }
    while(phone[s[indx]][i]!='\0'){
        word[indx]=phone[s[indx]][i];
        gstring(s,phone,word,indx+1,k);
        i++;
    }
}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    char phone[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","uvw","wxyz"};
    char word[n+1];
    word[n]=0;
    gstring(a,phone,word,0,n);
    return 0;
}