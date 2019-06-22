/*

check whether two number are semi prime or not(is a product of two prime numbers)

*/

#include<bits/stdc++.h>
using namespace std;

int checkprime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){

    int i,num,limit,count,factors[1000];
    cin>>num;
    limit=sqrt(num);
    for(i=2;i<=limit;i++){
        while(num%i==0){
            factors[count]=i;
            count++;
            num/=i;
        }
        if(count>2){
            cout<<"Not Semi Prime";
            return 0;
        }
    }
    if(num>1){
        factors[count++]=num;
    }
    if(count==2){
        for(i=0;i<2;i++){
            if(!checkprime(factors[i])){
                cout<<"Not Semi Prime";
                return 0;
            }
        }
        cout<<"Semi Prime";
        return 0;
    }
    else{
        cout<<"Not Semi Prime";
        return 0;
    }
}