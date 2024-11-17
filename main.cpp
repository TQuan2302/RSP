#include<iostream>
#include "TrieNode.cpp"
#include<vector>
using namespace std; 


int main() {
  
    // Create am example Trie
    TrieNode* root = new TrieNode();
    vector<string> arr = 
      {"and", "ant", "do", "geek", "dad", "ball"};
    for (const string& s : arr) {
        TrieNode::insertKey(root, s);
    }

    // One by one search strings
    vector<string> searchKeys = {"do", "gee", "bat"};
    for (string& s : searchKeys) {
        cout << "Key : " << s << "\n";
        if (TrieNode::searchKey(root, s)) 
            cout << "Present\n";
        else 
            cout << "Not Present\n";        
    }
  
    return 0;
}