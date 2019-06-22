/*

remove alternate elements in all
1 2 3 4 5 
op: 1 3 5

O(n)

*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};


void removealt(Node **head){
    if((*head)==NULL||(*head)->next==NULL){
        return;
    }
    Node *first=(*head),*second=first->next;
    while(second!=NULL&&second->next!=NULL){
        first->next=second->next;
        delete(second);
        first=first->next;
        second=first->next; 
    }
    if(second!=NULL){
        first->next=second->next;
        delete(second);
    }
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
    removealt(&head);
    printlist(head);
    return 0;
}