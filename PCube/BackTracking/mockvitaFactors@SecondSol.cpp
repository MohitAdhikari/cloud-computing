/*

find all permutaions of given strings.

 */
/*


NOT COMPLETED   x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x


 */
#include<bits/stdc++.h>
using namespace std;
void permuteFactors(int *s,int l,int r,int countfac[]){
    if(l==r){

        cout<<s<<endl;
    }
    for(int i=l;i<r;i++){
            swap(s[i],s[l]);
            permuteFactors(s,l+1,r,countfac);
            swap(s[i],s[l]);
        }
    }
}
int main(){
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            c++;
    for(int i=1;i<=c;i++)
        str[i-1]=i;        
    int str[100];
    permuteFactors(str,0,len,countnum);
    return 0;
}