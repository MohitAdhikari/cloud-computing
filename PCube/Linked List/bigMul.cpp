/*

perform multiplication of two big numbers

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
void recursiveprint(Node *head){
    if(head==NULL){
        //cout<<"List is empty!"<<endl;
        return;
    }
    recursiveprint(head->next);
    cout<<head->data;
}
Node* addNum(Node* head1,Node* head2){
    int carry=0,value;
    Node *head3=NULL;
    while(head1!=NULL&&head2!=NULL){
        value=(head2->data+head1->data+carry)%10;
        insertList(&head3,value);
        carry=(head2->data+head1->data+carry)/10;
        head1=head1->next;
        head2=head2->next; 
    }
    while(head1!=NULL){
        value=(head1->data+carry)%10;
        insertList(&head3,value);
        carry=(head1->data+carry)/10;
        head1=head1->next;
    }
    while(head2!=NULL){
        value=(head2->data+carry)%10;
        insertList(&head3,value);
        carry=(head2->data+carry)/10;
        head2=head2->next;
    }
    if(carry>0){
        insertList(&head3,carry);
    }
    return head3;
}

void mulNum(Node* head1,Node* head2,Node **head3,Node **head4){
    int carry=0,value,i=0,value2,j;
    Node *temp;
    while(head2!=NULL){
        temp=head1;
        carry=0;
        for(j=0;j<i;j++){
            insertList(head3,value2);
        }
        while(temp!=NULL){
            value2=0;
            value=(head2->data*temp->data+carry)%10;
            insertList(head3,value);
            carry=(head2->data*temp->data+carry)/10;
            temp=temp->next;
        }
        if(carry>0){
            insertList(head3,carry);
        }
        *head4=addNum(*head3,*head4);
        //printlist(*head3);
        //printlist(*head4);
        *head3=NULL;
        head2=head2->next;
        i++;
    }
}

int main(){
    Node *head1=NULL,*head2=NULL,*head3=NULL,*head4=NULL;
    int n,i,value;
    string str,str1;
    cout<<"Enter two Numbers"<<endl;
    cin>>str;
    cin>>str1;
    //cout<<str<<" "<<str1<<endl;
    for(i=str.length()-1;i>=0;i--){
        value=str[i]-'0';
        insertList(&head1,value);
    }
    for(i=str1.length()-1;i>=0;i--){
        value=str1[i]-'0';
        insertList(&head2,value);
    }
    mulNum(head1,head2,&head3,&head4);
    recursiveprint(head4);
    return 0;
}