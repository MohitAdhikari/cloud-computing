
/*

add two polynomials and print the resulting polynomial

 */
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int coeff,power;
    Node *next;
};

void insertList(Node **head,int coeff,int power){
    Node *temp=new Node();
    temp->coeff=coeff;
    temp->power=power;
    temp->next=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
    Node *itr=*head;
    while(itr->next!=NULL){
        itr=itr->next;
    }
    itr->next=temp;
}

int evaluatePolynomial(Node *head,int x)
{
    int sum=0;
    while(head!=NULL){
        sum+=head->coeff*pow(x,head->power);
        head=head->next;
    }
    return sum;
}
int main(){
    Node *head=NULL;
    int n,i,coeff,power,x;
    cout<<"Enter no. of terms and x"<<endl;
    cin>>n >> x;
    cout<<"Enter coeffs and power"<<endl;
    for(i=0;i<n;i++){
        cin>>coeff>>power;
        insertList(&head,coeff,power);
    }
    cout<<evaluatePolynomial(head,x);
    return 0;
}