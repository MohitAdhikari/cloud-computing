/*

find the index of first of the given substr
string:abcdefg
sub:cde

op:2

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len1,len2,j,temp;
    char c[100],d[100];
    cin>>c;
    cin>>d;
    len1=strlen(c);
    len2=strlen(d);
    for(i=0;i<len1-len2+1;i++){
        temp=i;
        for(j=0;j<len2;j++){
            if(c[temp]==d[j]){
                temp++;
            }
            else
            {
                break;
            }
        }
        if(j==len2){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}