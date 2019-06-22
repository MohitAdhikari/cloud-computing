/* 

print the last k nodes of a LL

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
void printKNodes(Node *head,int k){
    Node *temp=head;
    stack <int> s;
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    while(k--){
        cout<<s.top()<<" ";
        s.pop();
    }
}


int main(){
    Node *head=NULL;
    int n,i,k,value;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(i=0;i<n;i++){
        cin>>value;
        insertList(&head,value);
    }
    cout<<"Enter value of k"<<endl;
    cin>>k;
    printKNodes(head,k);
    return 0;
}