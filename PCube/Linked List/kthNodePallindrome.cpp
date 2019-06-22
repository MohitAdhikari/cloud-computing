/*

pallindrome using kth node.

 */


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

int count(Node *head){
    int c=0;
    while(head!=NULL){
        head=head->next;
        c++;
    }
    return c;
}
int findkthnode(Node *head,int k){
    int c=1;
    while(head!=NULL&&c!=k){
        head=head->next;
        c++;
    }
    //cout<<head->data;
    return head->data;
}
bool pallindrome(Node **head){
    int flag=0,i,c;
    c=count(*head);
    for(i=1;i<=c/2;i++){
        //cout<<findkthnode(*head,i)<<" "<<findkthnode(*head,c-i+1)<<endl;
        if(findkthnode(*head,i)!=findkthnode(*head,c-i+1)){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return true;
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
    Node *head=NULL;
    int n,i,value;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head,value);
    }
    printlist(head);
    if(pallindrome(&head)){
        cout<<"Pallindrome";
        return 0;
    }
    cout<<"Not Pallindrome";
    return 0;
}