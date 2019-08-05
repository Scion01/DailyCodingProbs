//Print the nodes in a binary tree level-wise. For example, the following should print 1, 2, 3, 4, 5.
#include<iostream>
#include<queue>
using namespace std;

struct node{
	int data;
	node * left;
	node * right;
};

queue <node*> q;

void inorder(node * head){
	if(head == NULL)
		return;
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}

int main(){
	node * head = new node();
	head->data = 1;
	head->right = new node();
	head->left = new node();
	head->left->data=2;
	head->left->left = NULL;
	head->left->right=NULL;
	head->right->data=3;
	head->right->left = new node();
	head->right->right = new node();
	head->right->left->data = 4;
	head->right->left->left = NULL;
	head->right->left->right = NULL;
	head->right->right->data = 5;
	head->right->right->left = NULL;
	head->right->right->right = NULL;
	inorder(head);
	cout<<endl;
	q.push(head);
	while(!q.empty()){
		node * temp = q.front();
		if(temp->left != NULL)
			q.push(temp->left);
		if(temp->right != NULL)
			q.push(temp->right);
		cout<<" "<<temp->data;
		q.pop();
	}
	return 0;
}
