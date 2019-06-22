/*

print all paths from root to all the leaf nodes

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

void printArr(int *a,int n){
    for(int i=0;i<=n;i++){
            cout<<a[i]<<" ";
    }
    cout<<endl;
}
void allPaths(node *root,int *s,int i){
	if(root==NULL){
        return;
    }
    if(root->left==NULL&&root->right==NULL){
        s[i]=root->data;
        printArr(s,i);
		return;
    }
    s[i]=root->data;
	allPaths(root->left,s,i+1);
    allPaths(root->right,s,i+1);
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
    /* temp3=new node();
	temp3->data=17;
	temp1->left=temp3;
	temp3->left=NULL;
    temp3->right=NULL; */
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
    int str[100];
    allPaths(root,str,0);
	return 0;
}
