/*

print nodes in level order traversal

        5
    10     15
  20  25

*/
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left,*right;
};
void levelOrderTraversal(node *root,int level,queue <int> &q,stack <int> &s,int i){
	if(root==NULL)
		return ;
    if(level==1&&i%2){
        q.push(root->data);
        return;
    }
    if(level==1&&!(i%2)){
        s.push(root->data);
        return;
    }
	levelOrderTraversal(root->left,level-1,q,s,i);
    levelOrderTraversal(root->right,level-1,q,s,i);
}
int main(){
	node *root=NULL;
	root=new node();
	root->data=5;
	node *temp,*temp1,*temp2,*temp3;
	temp=new node();
	temp->data=10;
	root->left=temp;
	temp1=new node();
	temp1->data=15;
	root->right=temp1;
	temp1->left=NULL;
    temp1->right=NULL;
	
	temp2=new node();
	temp2->data=20;
	temp->left=temp2;
    temp2->left=NULL;
    temp2->right=NULL;
	temp3=new node();
	temp3->data=25;
	temp->right=temp3;
    temp3->left=NULL;
    temp3->right=NULL;

    queue <int> q;
    stack <int> s;
	for(int i=1;i<=3;i++){
	    levelOrderTraversal(root,i,q,s,i);
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
    }
	return 0;
}
