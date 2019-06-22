/*

check whether a LL is circular or not.

*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void singlyToCircular(Node *head){
    Node *first=head;
    while(first->next!=NULL){
        first=first->next;
    }
    first->next=head;
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
bool checkCircular(Node *head){
    Node *first=head;
    if(head==NULL){
        return false;
    }
    first=first->next;
    while(first!=head){
        if(first==NULL){
            return false;
        }
        first=first->next;
    }
    return true;
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
    singlyToCircular(head);
    if(checkCircular(head))
        cout<<"Circular LL";
    else
        cout<<"Not Circular";
    //printlist(head);
    return 0;
}