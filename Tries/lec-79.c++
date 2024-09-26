#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* child[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++){
            child[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie{
    public:
    TrieNode* root;
    Trie() {
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode* temp;
        //present
        if(root-> child[index] != NULL) {
            temp = root->child[index];
        }
        else {  //absent
            temp = new TrieNode(word[0]);
            root->child[index] = temp;
        }
         
        insertUtil(temp, word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root, word);
    }
};
int main()
{
    Trie* t = new Trie();
    t->insertWord("abcd");
    return 0;
}