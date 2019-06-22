/*

Program to store & print BST. 

*/

//incomplete

#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left,*right;
};
int c=0;
void insertBTree(node **root,vector<vector <int>> &v,int i,int j,int size){
    if(v[i][j]==-1){
        return NULL;
    }
    node *temp=new node();
    if(i==0)
        *root=temp;
    if(v[i][1]!=-1){
        node *temp1=new node();
        temp->left=temp1;
    }
    else
        temp->left=NULL;
    if(v[i][2]!=-1){
        node *temp2=new node();
        temp->right=temp2;
    }
    else
        temp->right=NULL;

}
int main(){
	node *root=NULL;
    int i,parent,lchild,rchild,nodes;
    vector <vector<int>> v;
    vector <int> temp;
    cout<<"Enter number of nodes"<<endl;
    cin>>nodes;
    cout<<"Enter parent data,lchild no.,rchild no.: Enter -1 if NULL"<<endl;
    for(i=0;i<nodes;i++){
        cin>>parent>>lchild>>rchild;
        temp.push_back(parent);
        temp.push_back(lchild);
        temp.push_back(rchild);
        v.push_back(temp);
        temp.clear();
    }
    insertBTree(&root,v,0,nodes);
	return 0;
}
