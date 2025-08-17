#include <iostream>
using namespace std;

class TrieNode{
    public:
    char ch;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        this->ch = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

void insertWord(TrieNode* root, string word){
    cout << word << endl;
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        child = root->children[index];
    }
    else{
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    insertWord(child, word.substr(1));
}

bool searchWord(TrieNode* root, string word){
    if(word.length() == 0){
        if(root->isTerminal){
            return true;
        }
        else{
            return false;
        }
    }
    char ch = word[0];
    int index = ch -'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        child = root->children[index];       
    }
    else{
        return false;
    }
    searchWord(child, word.substr(1));
}

int main(){
    TrieNode* root = new TrieNode('-');
    insertWord(root, "payal");
    insertWord(root, "pay");
    insertWord(root, "code");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    insertWord(root, "codess");

    cout << searchWord(root,"na") << endl;
    if(searchWord(root,"na")){
        cout << "Present" << endl;
    }
    else{
        cout << "Absent" << endl;
    }

    return 0;
}