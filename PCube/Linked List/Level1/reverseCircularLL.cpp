#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void singlyToCircular(Node *head){
    Node *first=head;
    while(first->next!=NULL){
        first=first->next;
    }
    first->next=head;
}

void reverseList(Node **head){
    Node *first,*last;
    if((*head)==NULL||(*head)->next==(*head))
        return;
    first=(*head)->next;
    while(first!=(*head)){
        last=first;
        first=first->next;
    }
    cout<<last->data<<endl;
    Node *current=(*head),*prev=last,*right;
    do{
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }while(current!=(*head));
    *head=prev;
}

void insertList(Node **head,int value){
    Node *temp=new Node();
    temp->data=value;
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
    Node *first=head;
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<first->data<<"->";
    first=first->next;
    while(first!=head){
        cout<<first->data<<"->";
        first=first->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node *head=NULL;
    int n,i,value;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head,value);
    }
    singlyToCircular(head);
    reverseList(&head);
    printlist(head);
    return 0;
}