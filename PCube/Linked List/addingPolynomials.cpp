
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
void printlist(Node *head){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->coeff<<"^"<<head->power<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

void addPolynomial(Node *head1,Node *head2,Node **head3)
{
    while(head1!=NULL&&head2!=NULL){
        if(head1->power>head2->power){
            insertList(head3,head1->coeff,head1->power);
            head1=head1->next;
        }
        else if(head2->power>head1->power){
            insertList(head3,head2->coeff,head2->power);
            head2=head2->next;
        }
        else{
            insertList(head3,head1->coeff+head2->coeff,head1->power);
            head1=head1->next;
            head2=head2->next;
        }

    }
    while(head1!=NULL){
        insertList(head3,head1->coeff,head1->power);
        head1=head1->next;
    
    }
    while(head2!=NULL){
        insertList(head3,head2->coeff,head2->power);
        head2=head2->next;
    }

}
int main(){
    Node *head1=NULL,*head2=NULL,*head3=NULL;
    int n,i,coeff,power;
    cin>>n;
    cout<<"Enter coeffs and power"<<endl;
    for(i=0;i<n;i++){
        cin>>coeff>>power;
        insertList(&head1,coeff,power);
    }
    cin>>n;
    cout<<"Enter coeffs and power"<<endl;
    for(i=0;i<n;i++){
        cin>>coeff>>power;
        insertList(&head2,coeff,power);
    }
    addPolynomial(head1,head2,&head3);
    printlist(head3);
    return 0;
}