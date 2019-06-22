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
void insertfront(Node **head,int value){
    Node *temp=new Node();
    temp->data=value;
    temp->next=*head;
    *head=temp;
}
void insertbw(Node **head,int value,int pos){
    int count=1;
    if(*head==NULL){
        cout<<"Invalid position"<<endl;
        
    }

    Node *itr=*head;
    Node *temp=new Node();
    temp->data=value;
    while(count<pos){
        itr=itr->next;
        count++;
        if(itr==NULL){
            cout<<"Invalid position"<<endl;
            return;
        }
    }
    temp->next=itr->next;
    itr->next=temp;
}
void deleteNode(Node **head,int key){
    if(*head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node *temp=*head,*prev;
    if((*head)->data==key){
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Element not Found"<<endl;
        return;
    }
    prev->next=temp->next;
    delete(temp);
}
void deletefront(Node **head){
    if(*head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node *temp=*head;
    *head=(temp)->next;
    delete(temp);
}
void deleteback(Node **head){
    if(*head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node *temp=*head,*free=*head;
    if(temp->next==NULL){
        *head=NULL;
        delete(temp);
        return;
    }
    while(temp->next!=NULL){
        free=temp;
        temp=temp->next;
    }
    free->next=temp->next;
    delete(temp);
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
    int value,n,ch,position;
    
    cout<<"1.Insert"<<endl;
    cout<<"2.Insert at front"<<endl;
    cout<<"3.Insert in between"<<endl;
    cout<<"4.Delete"<<endl;
    cout<<"5.Delete from front"<<endl;
    cout<<"6.Delete from back"<<endl;
    cout<<"7.Print"<<endl;
    cout<<"8.Exit"<<endl;
    cin>>ch;
    while(ch<8){
        if(ch==1){
            cin>>value;
            insertList(&head,value);
        }
        else if(ch==2){
            cin>>value;
            insertfront(&head,value);
        }
        else if(ch==3){
            cin>>value>>position;
            if(position==1&&(head==NULL||head->next==NULL)){
                insertfront(&head,value);
                
            }
            else
            insertbw(&head,value,position);
        }
        else if(ch==4){
            cin>>value;
            deleteNode(&head,value);
        }
        else if(ch==5){
            deletefront(&head);
        }
        else if(ch==6){
            deleteback(&head);
        }
        else if(ch==7){
            printlist(head);
        }
        cout<<"1.Insert"<<endl;
        cout<<"2.Insert at front"<<endl;
        cout<<"3.Insert in between"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Delete from front"<<endl;
        cout<<"6.Delete from back"<<endl;
        cout<<"7.Print"<<endl;
        cout<<"8.Exit"<<endl;
        cin>>ch;
    }
    return 0;
}