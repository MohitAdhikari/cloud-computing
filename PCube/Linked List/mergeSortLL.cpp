/*

perform merge sort in LL

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
void split(Node *head,Node **first,Node **second){
    Node *temp1=head,*temp2=head;
    while(temp2!=NULL&&temp2->next!=NULL&&temp2->next->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next->next;
        
    }
    *first=head;
    temp2=(temp1);
    *second=temp1->next;
    temp2->next=NULL;

}
Node* merge(Node *first,Node *second){
    Node* tmp=NULL,*temp=NULL;
    while(first!=NULL&&second!=NULL){
        if(first->data<second->data){
            insertList(&tmp,first->data);
            temp=first;
            first=first->next;
            delete(temp);
        }
        else if(first->data>second->data){
            insertList(&tmp,second->data);
            temp=second;
            second=second->next;
            delete(temp);
        }
        else{
            insertList(&tmp,first->data);
            insertList(&tmp,first->data);
            temp=first;
            first=first->next;
            delete(temp);
            temp=second;;
            second=second->next;
            delete(temp);
        }
    }
    while(first!=NULL){
        insertList(&tmp,first->data);
        temp=first;
        first=first->next;
        delete(temp);

    }
    while(second!=NULL){
        insertList(&tmp,second->data);
        temp=second;
        second=second->next;
        delete(temp);
    }
    return tmp;
}
void mergeSort(Node **headptr){
    Node *h=(*headptr);
    Node *first,*second;
    if((h==NULL)||(h->next)==NULL){
        return;
    }
    split(h,&first,&second);
    printlist(first);
    printlist(second);
    mergeSort(&first);
    mergeSort(&second);
    *headptr=merge(first,second);
    printlist(*headptr);
    return;
}

int main(){
    Node *head=NULL,*head1=NULL;
    int n,i,value;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head,value);
    }
    mergeSort(&head);
    //printlist(head);
    return 0;
}