/*

eg: 5 2 3 8
    1 7 4 5
op: 5 7 4 8

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

void mergeGreater(Node *head1,Node *head2,Node **head3)
{
    while(head1!=NULL&&head2!=NULL){
        if(head1->data>=head2->data){
            insertList(head3,head1->data);
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->data<head2->data){
            insertList(head3,head2->data);
            head1=head1->next;
            head2=head2->next;
        }
    }

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
    mergeGreater(head1,head2,&head3);
    printlist(head3);
    return 0;
}