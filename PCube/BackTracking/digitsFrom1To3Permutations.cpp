/*

find all permutaions of given strings.

 */

/* #include<bits/stdc++.h>
using namespace std;
void permute(char *s,int l,int r){
    if(l==r){
        cout<<s<<endl;
    }
    for(int i=l;i<r;i++){
        swap(s[i],s[l]);
        permute(s,l+1,r);
        swap(s[i],s[l]);
    }
}
/* void gstring(char *s,int size,int indx,int *countnum){
    int i;
    if(indx==size){
        permute(s,0,indx);
        return;
    }
    for(i=0;i<size;i++){
        if(countnum[i]==0){
            s[indx]=i;
            countnum[i]=1;
            gstring(s,size,indx+1,countnum);
            countnum[i]=0;
        }
    }
}
 */
/* void gstring(char *s,int size,int indx){
    int i;
    if(indx==size){
        permute(s,0,indx);
        return;
    }
    for(i=indx;i<size;i++){
        
        gstring(s,size,i+1);
        
    }
}

int main(){
    int k,countnum[10]={0};
    cin>>k;
    char str[100];
    cin>>str;
    int len=strlen(str);
    permute(str,0,len,countnum);
    return 0;
} */ 

/* #include<bits/stdc++.h>
using namespace std;

void subsetSum(int inputindx,int n,int r,int *outstr,int outindx){
    if(outindx==r){
        for(int i=0;i<r;i++){
            cout<<outstr[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=inputindx;i<n;i++){
        outstr[outindx]=i;
        subsetSum(i+1,n,r,outstr,outindx+1);
        outstr[outindx]=i;
    }
}
int main(){
    int out[100],n,i,k;
    cin>>k;
    subsetSum(0,n,k,out,0);
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

void permute(int *s,int l,int r){
    if(l==r){
        int num=0;
        for(int i=r-1;i>=0;i--){
            num+=s[(r-1)-i]*pow(10,i);
        }
        if(num%7==0){
            for(int i=0;i<r;i++){
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
    }
    for(int i=l;i<r;i++){
        swap(s[i],s[l]); 
        permute(s,l+1,r);
        swap(s[i],s[l]);
    }
}
void subsetSum(int *s,int inputindx,int n,int r,int *outstr,int outindx){
    if(outindx==r){
        permute(outstr,0,r);
    }
    for(int i=inputindx;i<n;i++){

        outstr[outindx]=s[i];
        subsetSum(s,i+1,n,r,outstr,outindx+1);
        outstr[outindx]=s[i];
    }
}
int main(){
    int str[100],out[100],n,i,k;
    n=3;
    k=3;
    //cin>>n;
    for(i=1;i<10;i++)
        str[i-1]=i;
    //cin>>k;
    subsetSum(str,0,n,k,out,0);
    return 0;
}