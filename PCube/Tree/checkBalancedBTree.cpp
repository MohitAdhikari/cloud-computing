/*

check if a binary tree is balanced or not.(at every node difference of height left and right subtree is atmost 1)
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
int heightBTree(node *root){
    if(root==NULL)
        return 0;
    return max(heightBTree(root->left),heightBTree(root->right))+1;
}
int balancedBTree(node *root){
	if(root==NULL)
		return 1;
    if(abs(heightBTree(root->left)-heightBTree(root->right))<2)
	    return min(balancedBTree(root->left),balancedBTree(root->right));
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
	
	if(balancedBTree(root))
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}
