/*

meadian of ll
1 2 3 4 5 
op: 3

O(n)

*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void middleElement(Node *head){
    //cout<<"yo";
    Node *first=head,*second=head;
    
    while(second!=NULL&&second->next!=NULL&&second->next->next!=NULL){
        first=first->next;
        second=second->next->next;
        //cout<<first->data<<endl;
    }
    if(head!=NULL)
    cout<<first->data;
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
    middleElement(head);
    
    return 0;
}