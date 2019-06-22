/* 

reverse a linked list using stack

*/


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

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
Node *reverse(Node * head){
    Node *temp=head;
    stack <Node *> s;
    while(temp->next!=NULL){
        s.push(temp);
        temp=temp->next;
    }
    head=temp;
    while(!s.empty()){
        head->next=s.top();
        s.pop();
        head=head->next;
    }
    head->next=NULL;
    return temp;
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
    head=reverse(head);
    printlist(head);
    return 0;
}