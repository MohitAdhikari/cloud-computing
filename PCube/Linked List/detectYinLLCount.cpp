/*

find diffenece in length of both ll and start comparing both ll by starting iteration from kth node(differnce in lengths of ll) of larger ll

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
    Node *temp1=head1,*temp2=head2;
    int c1=0,c2=0;
    while(temp1!=NULL){
        c1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
            c2++;
            temp2=temp2->next;
    }
    temp1=head1;
    temp2=head2;
    int d=abs(c1-c2);
    //cout<<d;
    if(c1>c2){
        while(d>0){
            temp1=temp1->next;
            d--;
        }
    }
    else if(c2>c1){
        while(d>0){
            temp2=temp2->next;
            d--;
        }
    }
    while(temp1!=NULL){
        if(temp1==temp2){
            return true;
        }
        temp1=temp1->next;
        temp2=temp2->next;
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