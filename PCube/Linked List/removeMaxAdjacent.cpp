
/*

remove those elements whose elements on right side are greater than it
12 15 10 11 5 6 2 3
op: 15 11 6 3

*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

void removeAdj(Node **head){
    Node *first=(*head),*second,*prev,*tmp;
    int flag=0;
    prev=first;
    while(first!=NULL){
        
        second=first->next;
        flag=0;
        while(second!=NULL){
            if(first->data<second->data){
                flag=1;
                break;
            }
            second=second->next;
        }
        if(flag==1){
            if(first==(*head)){
                *head=(*head)->next;
                delete(first);
                first=(*head);
            }
            else{
                prev->next=first->next;
                delete(first);
                first=prev->next;
            }
        }
        else{
            prev=first;
            first=first->next;
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
    removeAdj(&head);
    printlist(head);
    return 0;
}