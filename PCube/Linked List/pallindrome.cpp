/*

pallindrome using reverse.

 */


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void reverseList(Node *head){
    Node *current=head->next,*prev=NULL,*right;
    right=current->next;
    while(current!=NULL){
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    head->next=prev;
}

bool pallindrome(Node **head){
    Node *first=*head,*second=*head;
    int flag=0;
    while(second!=NULL&&second->next!=NULL&&second->next->next!=NULL){
        first=first->next;
        second=second->next->next;
    }
    if(head!=NULL)
        reverseList(first);
    second=*head;
    first=first->next;
    
    
    while(first!=NULL&&second->data==first->data){
        first=first->next;
        second=second->next;
    }
    if(first==NULL){
        return true;
    }
    return false;
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
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
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
    printlist(head);
    if(pallindrome(&head)){
        cout<<"Pallindrome";
        return 0;
    }
    cout<<"Not Pallindrome";
    return 0;
}