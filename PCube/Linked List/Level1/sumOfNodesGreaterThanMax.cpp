/*

sum of nodes of those nodes which are greater than next node

eg: 9 2 3 5 4 6 8
op: 9+5=14

 */


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

int sumMaxAdj(Node *head){
    int sum=0;
    if(head==NULL){
        return 0;
    }
    if(head->next==NULL){
        return head->data;
    }
    int temp=head->data;
    while(head->next!=NULL){
        if(head->data>head->next->data)
            sum+=head->data;
        head=head->next;
    }
    if(head->data>temp){
        sum+=head->data;
    }
    return sum;
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
    cout<<sumMaxAdj(head);
    return 0;
}