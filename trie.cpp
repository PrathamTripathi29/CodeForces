#include <iostream>
#include <string>
using namespace std;

struct TrieNode {
    TrieNode* links[26] = {NULL};
    bool flag = false;
    bool containsKey(char ch){
        return (links[ch - 'a'] != NULL);
    }
    void put(char ch, TrieNode* TrieNode){
        links[ch - 'a'] = TrieNode;
    }
    TrieNode* get(char ch){
        return links[ch - 'a'];
    }
    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
};

class Trie{
    private:
     TrieNode* root;

     public:

    Trie(){
        root = new TrieNode();
    }

    void insert(string word){
        TrieNode* trieNode = root;
        for(int i=0; i<word.length(); i++){
            if(!trieNode->containsKey(word[i])){
                trieNode->put(word[i], new TrieNode());
            }
            trieNode = trieNode->get(word[i]);
        }
        trieNode->setEnd();
    }

    bool search(string word){
        TrieNode* trieNode = root;
        for(int i=0; i<word.length(); i++){
            if(!trieNode->containsKey(word[i])){
                return false;
            }
            trieNode = trieNode->get(word[i]);
        }
        return trieNode->isEnd();
    }

    bool startsWith(string word){
        TrieNode* trieNode = root;
        for(int i=0; i<word.length(); i++){
            if(!trieNode->containsKey(word[i])){
                return false;
            }
            trieNode = trieNode->get(word[i]);
        }
        return true;
    }
};