/*

check whether two trees are identical or not.

        5
    10     15
 20    25


         5
    10     15
 20    25

*/
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left,*right;
};
int c=0;
int identicalBTree(node *root1,node* root2){
	if(root1==NULL&&root2==NULL)
		return 1;
    else if(root1==NULL||root2==NULL)
		return 0;
    else if(root1->data==root2->data)
	    return identicalBTree(root1->left,root2->left)*identicalBTree(root1->right,root2->right);
    return 0;
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

    node *root1=NULL;
	root1=new node();
	root1->data=5;
	temp=new node();
	temp->data=10;
	root1->left=temp;
	temp1=new node();
	temp1->data=15;
	root1->right=temp1;
	temp2->left=NULL;
    temp2->right=NULL;
	
	temp2=new node();
	temp2->data=20;
	temp->left=temp2;
    temp2->left=NULL;
    temp2->right=NULL;
	temp3=new node();
	temp3->data=25;
	temp->right=temp3;
	temp2->left=NULL;
    temp2->right=NULL;
	if(identicalBTree(root,root1))
        cout<<"YES";
    else
        cout<<"NO";  
	return 0;
}
