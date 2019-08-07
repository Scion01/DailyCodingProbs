#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node * left;
	node * right;
};
void inorder(node * head){
	if(head == NULL)
		return;
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}

void ppath(vector <node *> p){
	cout<<endl;
	for(auto itr = p.begin(); itr!=p.end(); ++itr)
		cout<<(*itr)->data<<" ";
}

void find_path(node * head, vector <node *> p){
	if(head->left == NULL && head->right == NULL)
		ppath(p);
	if(head->left!=NULL){
		p.push_back(head->left);
		find_path(head->left,p);
		p.erase(p.end()-1);
	}
	
	if(head->right!=NULL){
		p.push_back(head->right);
		
		find_path(head->right,p);
	}
	
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
	head->right->right->right = new node();
	head->right->right->right->data = 6;
	head->right->right->right->left = NULL;
	head->right->right->right->right = NULL;
	inorder(head);
	cout<<endl;
	vector <node *> p;
	p.push_back(head);
	find_path(head,p);		
	return 0;
}
