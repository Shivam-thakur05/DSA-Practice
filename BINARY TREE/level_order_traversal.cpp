#include<iostream>
#include<bits/stdc++.h>
using namespace std;\

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//iterative approach
void levelOrdertraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);   //for leveling we use sepretor taki shi jgh pr endl lgaye
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            //ek null to ho gya ab age ke level ke liye endl ki taiyari  
            if(!q.empty()){
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

//recursive approach


int main()
{

    Node* root = new Node(12);
    root->left = new Node(19);
    root->right = new Node(43);
    root->left->left = new Node(10);
    root->left->right = new Node(33);
    root->right->left = new Node(23);
    root->right->right = new Node(15);
    root->left->left->left = new Node(14);
    root->left->right->right = new Node(34);
    levelOrdertraversal(root);
    return 0;
}