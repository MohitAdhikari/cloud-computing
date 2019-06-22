/*

using brute force

*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void joinlist(Node *head1,Node *head2,Node *head3){
    //cout<<"yo";
    while(head1->next!=NULL){
        head1=head1->next;
    }
    while(head2->next!=NULL){
        head2=head2->next;
    }
    head1->next=head3;
    head2->next=head3;
}
bool checkY(Node *head1,Node *head2){
    Node *temp;
    while(head1!=NULL){
        temp=head2;
        while(temp!=NULL){
            if(temp==head1){
                return true;
            }
            //cout<<head1->data<<" "<<temp->data<<endl;
            temp=temp->next;
        }
        head1=head1->next;
    }
    return false;;
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
    Node *head1=NULL,*head2=NULL,*head3=NULL;
    int n,i,value;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head1,value);
    }
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head2,value);
    }
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head3,value);
    }
    joinlist(head1,head2,head3);
    printlist(head1);
    printlist(head2);
    if(checkY(head1,head2))
        cout<<"Y detected"<<endl;
    else
        cout<<"No Y detected"<<endl;
    return 0;
}