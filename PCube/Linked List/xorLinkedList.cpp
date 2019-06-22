/* 

traverse a singly linked list in both directions by using xor

*/


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void insertList(Node **head,Node **tail,int value){
    Node *temp=new Node();
    temp->data=value;
    
    if(*head==NULL){
        temp->next=0;
        *head=temp;
        *tail=temp;
        return;
    }
    Node *itr=*head;
    while(itr->next!=NULL){
        itr=itr->next;
    }
    itr->next=(temp)^(itr->next);
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
    Node *head=NULL,*tail=NULL;
    int n,i,value;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head,&tail,value);
    }
    printlist(head);
    return 0;
}