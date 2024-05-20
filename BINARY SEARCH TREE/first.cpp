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

void printPostorder(struct Node* node)
{
	if (node == NULL)
		return;

	// First recur on left subtree
	printPostorder(node->left);

	// Then recur on right subtree
	printPostorder(node->right);

	// Now deal with the node
	cout << node->data << " ";
}
void minValue(struct Node* node,int &ans){
	if(node == NULL) return;
	while(node->left != NULL){
		node = node->left;
	}
	ans = node->data;
}
void maxValue(struct Node* node,int &ans){
	if(node == NULL) return;
	while(node->right != NULL){
		node = node->right;
	}
	ans = node->data;
}
Node* success_r(Node* root,int &successor){
	while(root->data != successor && root != NULL){
		root = root->left;
	}
}
int main()
{
    struct Node* root = newNode(6);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(2);
    root->left->right = newNode(5);
    root->right->left = newNode(8);
    root->right->right = newNode(11);
    root->left->left->left = newNode(1);
    root->left->left->right = newNode(3);
    root->right->right->left = newNode(10);
    root->right->right->right = newNode(12);

	// Function call
	cout << "Inorder traversal of binary tree is : ";
	printInorder(root);
    cout<<endl;

    cout << "preorder traversal of binary tree is : ";
    printPreorder(root);
    cout<<endl;

    cout << "postorder traversal of binary tree is : ";
    printPostorder(root);
    cout<<endl;

	int temp;
	minValue(root,temp);
	cout<<"minimum value in BST is : "<<temp;
	maxValue(root,temp);
	cout<<endl<<"maximum vlaue in BST is : "<<temp;

	int element;
	cout<<"enter element for finding the successor : "<<endl;
	cin>>element;

	return 0;
}