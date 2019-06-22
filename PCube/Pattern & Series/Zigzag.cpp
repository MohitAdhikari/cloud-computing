#include<iostream>
using namespace std;
int main()
{
    int n,i,j,ispace,nspace=0,bspace=-1,len,first=0,alt,temp;
    string str;
    cin>>str;
    cin>>n;
    ispace=2*n-3;
    len=str.length();
    for(i=0;i<n;i++){
        alt=0;
        for(j=1;j<=nspace;j++)
            cout<<" ";
        temp=first+i;
        while(temp<len){
            if(i==0||i==n-1)

            cout<<str[temp];
            if(alt==0){
                for(j=1;j<=ispace;j++)
                cout<<" ";
            }
            else{
                for(j=1;j<=bspace;j++)
                cout<<" ";
            }
            temp+=ispace+1;
            alt=1-alt;
        }
        cout<<endl;
        ispace=ispace-2;
        nspace++;
        bspace=bspace+2;
    }
    return 0;
}