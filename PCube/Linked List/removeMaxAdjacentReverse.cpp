/*

remove those elements whose elements on right side are greater than it
12 15 10 11 5 6 2 3
op: 15 11 6 3

O(n)

*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void reverseList(Node **head){
    Node *current=*head,*prev=NULL,*right;
    right=current->next;
    while(current!=NULL){
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    *head=prev;
}

void removeAdj(Node **head){
    if(head==NULL||head->next==NULL){
        return;
    }
    int max,flag=0;
    Node *first=(*head);
    max=first->data;
    Node *second=first->next;
    while(first!=NULL){
        flag=0;
        while(second!=NULL){
            if(max>second->data){
                flag=1;
                break;
            }
            else{
                max=second->data;
                first=second;
            }
            second=second->next;
        }
        if(flag==1){
            if(second==(*head)){
                *head=(*head)->next;
                delete(second);
                first=(*head);
                max=first->data;
                second=first->next;
            }
            else{
                first->next=second->next;
                delete(second);
                second=first->next;
            }
        }
        else{
            break;
        }
    }
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
    reverseList(&head);
    removeAdj(&head);
    reverseList(&head);
    printlist(head);
    return 0;
}