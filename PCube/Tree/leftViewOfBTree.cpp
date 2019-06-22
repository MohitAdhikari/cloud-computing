/*

print left view of a tree

->        5
->    10     15
-> 20    25
 
 op: 5 10 20
 
*/

#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left,*right;
};
int flag;
void levelOrderTraversal(node *root,int level){
    if(root==NULL||flag==1)
		return ;
    if(level==1){
        cout<<root->data;
        flag=1;
        return;
    }
	levelOrderTraversal(root->left,level-1);
    levelOrderTraversal(root->right,level-1);
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
	for(int i=1;i<=3;i++){
	    levelOrderTraversal(root,i);
        flag=0;
        cout<<endl;
    }
	return 0;
}
