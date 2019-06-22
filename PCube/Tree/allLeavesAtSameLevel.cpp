/*

print all leaves at same level in a binary tree.

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
int checkLeafLevel(node *root,int i){
    static int lvl=-1;
	if(root==NULL)
		return 1;
    if(root->left==NULL&&root->right==NULL){
        if(lvl==-1){
            lvl=i;
            return 1;
        }
        else{
            if(lvl==i)
                return 1;
            return 0;
        }
    }
	return min(checkLeafLevel(root->left,i+1),checkLeafLevel(root->right,i+1));
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
	
	if(checkLeafLevel(root,1))
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}
