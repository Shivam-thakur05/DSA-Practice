#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[ 26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie{
    public:
    TrieNode* root;
    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
        }
    }
    void insertWord(string word ){
        insertUtil(root,word);
    }
};

int main()
{
    return 0;
}