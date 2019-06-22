
/*

multiply two polynomials and print the resulting polynomial

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

void mulPolynomial(Node *head1,Node *head2,Node **head3)
{
    int a,b;
    Node *x=head1,*y=head2;
    while(x!=NULL){
        y=head2;
        while(y!=NULL){
            a=y->coeff*x->coeff;
            b=y->power+x->power;
            insertList(head3,a,b);
            y=y->next;
        }
        x=x->next;
    }
}
void addPolynomial(Node *head,Node **final){
    Node *first=head,*second=head;
    int flag;
    if(head==NULL||head->next==NULL){
        return;
    }
    while(first->next!=NULL){
        second=first->next;
        flag=0;
        while(second!=NULL){
            if(second->power==first->power&&first->power!=-1){
                insertList(final,first->coeff+second->coeff,first->power);
                first->power=-1;
                second->power=-1;
                flag=1;
                break;
            }
            second=second->next;
        }
        if(flag==0&&first->power!=-1){
            insertList(final,first->coeff,first->power);
            first->power=-1;
        }
        first=first->next;
    }
    if(first->power!=-1){
        insertList(final,first->coeff,first->power);
        first->power=-1;
    }
}
int main(){
    Node *head1=NULL,*head2=NULL,*head3=NULL,*head4=NULL;
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
    mulPolynomial(head1,head2,&head3);
    printlist(head3);
    addPolynomial(head3,&head4);
    printlist(head4);
    return 0;
}