/*

loop detection in a LL using Floyd's Cycle Detection Algo
take 2 ptr. inc 1st by 1 & 2nd by 2

 */


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void findkthnode(Node *head,int k){
    int c=1;
    Node *temp=head;
    while(head!=NULL&&c!=k){
        head=head->next;
        c++;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
}
void findloop(Node *head){
    //cout<<"yo";
    Node *first=head,*second=head;
    
    while(second!=NULL&&second->next!=NULL&&second->next->next!=NULL){
        first=first->next;
        second=second->next->next;
        //cout<<first->data<<endl;
        if(second==first){
        cout<<"Loop Detected";
        return;
        }
    }
    cout<<"No Loop";
    return;
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
    int n,i,value,pos;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head,value);
    }
    cout<<"Enter postion to place the loop from last"<<endl;
    cin>>pos;
    if(pos<n)
    findkthnode(head,pos);
    //printlist(head);
    findloop(head);
    
    return 0;
}