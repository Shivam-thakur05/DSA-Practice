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

// Given a binary tree, print its nodes in preorder
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	// First print data of node
	cout << node->data << " ";

	// Then recur on left subtree
	printPreorder(node->left);

	// Now recur on right subtree
	printPreorder(node->right);
}

int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	// Function call
	cout << "Preorder traversal of binary tree is \n";
	printPreorder(root);
	return 0;
}
