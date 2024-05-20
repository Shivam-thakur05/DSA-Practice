#include <bits/stdc++.h>
using namespace std;

// A binary tree node has data, pointer to left child and a pointer to right child
struct Node {
	int data;
	struct Node *left, *right;
};

// Utility function to create a new tree node
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Given a binary tree, print its nodes in inorder
void printInorder(struct Node* node)
{
	if (node == NULL)
		return;

	// First recur on left child
	printInorder(node->left);

	// Then print the data of node
	cout << node->data << " ";

	// Now recur on right child
	printInorder(node->right);
}


int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    root->left->right->right = newNode(7);
    root->left->right->right->left = newNode(8);
    root->right->left = newNode(9);
    root->right->right = newNode(10);
    root->right->right->left = newNode(11);
    root->right->right->right = newNode(12);

	// Function call
	cout << "Inorder traversal of binary tree is \n";
	printInorder(root);

	return 0;
}