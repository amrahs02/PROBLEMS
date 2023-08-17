#include<bits/stdc++.h>
using namespace std;

class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length()==0){
            root->isTerminal = true;
            return ;
        }
        //assumption
        int index = word[0] - 'A';
        TrieNode* child;
        //present
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
        //absent
        child = new TrieNode(word[0]);
        root->children[index] = child;
        }
        //RECURSION
        insertUtil(child, word.substr(1));

    } 
    void insertWord(string word){
        return insertUtil(root, word);
    }

//search function
    bool searchUtil(TrieNode* root , string word){
         if(word.length()==0){
            return root->isTerminal;
            // return ;
         }
         int index = word[0]-'A';
         TrieNode* child;

         //present
         if(root->children[index]!=NULL){
            child = root->children[index];
         }
         else{
            //absent
            return false;
         }
         //recursion 
         return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }
}; 





int main(){
    Trie *t= new Trie() ;

    t->insertWord("ABCD");
    t->insertWord("DO");
    t->insertWord("TIME");
    t->insertWord("APPLE");
    cout<<"present or not "<< t->searchWord("APPLE") <<endl;
    cout<<"present or not "<< t->searchWord("DO") <<endl;
    cout<<"present or not "<< t->searchWord("TIME") <<endl;
    cout<<"present or not "<< t->searchWord("TIM
    
    ") <<endl;

}

// why we do not use hash 
// because it find in O(1) only for average cases
// but in worst case it goes on O(n)
// a tree that have n children
// also called prefix tree
// array of children to every node
