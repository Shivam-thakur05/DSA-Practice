#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();

            if(temp == NULL){
                cout<<endl;
                if(!q.empty()){
                    //queue still has some child
                    q.push(NULL);
                }
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
}

void inorder(Node* root) {
    // base case
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    // base case
    if(root == NULL) {
        return ;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    // base case
    if(root == NULL) {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node* minVal(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;

    while(temp->right != NULL ){
        temp = temp->right;
    }
    return temp;
}

Node* insertIntoBST(Node* root, int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d > root->data){
        // right part me insert karna hai
        root->right = insertIntoBST(root->right, d);
    }
    else{
        // left part me insert karna hai
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

Node* deleteFromBST(Node* root, int val){
    // base case
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        // first: 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // second: 1 child that can be left or right anyone
        // left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }  

        // third: 2 children
        if(root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }

    else if(val < root->data){
        root->left = deleteFromBST(root->left, val);
    }

    else{
        root->right = deleteFromBST(root->right, val);
    }
    return root;
}

void takeInput(Node*& root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node* root = NULL;

    cout << "Enter data to create BST: " << endl;
    takeInput(root);

    cout << "Printing the BST: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "Printing Inorder: " << endl;
    inorder(root);
    cout << endl;

    cout << "Printing Preorder: " << endl;
    preorder(root);
    cout << endl;

    cout << "Printing Postorder: " << endl;
    postorder(root);
    cout << endl;

    cout << "Min value is : " << minVal(root)->data << endl;
    cout << "Max value is : " << maxVal(root)->data << endl;

    root = deleteFromBST(root,30);

    cout << endl << "Printing the BST after deleting 30: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "Printing Inorder: " << endl;
    inorder(root);
    cout << endl;

    cout << "Printing Preorder: " << endl;
    preorder(root);
    cout << endl;

    cout << "Printing Postorder: " << endl;
    postorder(root);
    cout << endl;

    cout << "Min value is : " << minVal(root)->data << endl;
    cout << "Max value is : " << maxVal(root)->data << endl;
    return 0;
}
