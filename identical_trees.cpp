/*Given two non-empty binary trees s and t, check whether tree t has exactly the same structure and node values with a subtree of s. A subtree of s is a tree consists of a node in s and all of this node's descendants. The tree s could also be considered as a subtree of itself.*/


//this program will NOT run, but the core logic was ready, so just go through it

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
};

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}

int checkidentical(node * head1, node * head2){
	if(!head)
		return 1;
	return(head1->data == head2->data || checkidentical(head1->left,head2->left) || checkidentical(head1->right,head2->right));
	
	return 0;
}


