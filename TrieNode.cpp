#ifndef TRIENODE_H
#define TRIENODE_H
#include<iostream>
using namespace std; 

class TrieNode{
    public:
        //Pointer Array of TrieNode for each Node:
        TrieNode* child[26]; 

        //indicating the end of the a string: 
        bool wordEnd; 

        //Constructor: 
        TrieNode(){
            wordEnd = false; 
            
            for(int i = 0; i<26; i++){
                child[i] = nullptr;
            }
        }

        static void insertKey(TrieNode* root, const string& key){
            TrieNode* curr = root; 

            for(char c: key){
                //If the node with the character is not existed then create a new TrieNode: 
                if(curr->child[c - 'a'] == nullptr){
                    TrieNode* newNode = new TrieNode(); 
                    curr->child[c-'a'] = newNode; 
                }

                //Mode the pointer to the newly created node or the next character in the string in case the current character has existed: 
                curr = curr->child[c-'a']; 
            }
            //Mark the end of the string: 
            curr->wordEnd = 1; 
        }

        static bool searchKey(TrieNode* root, const string& key){
            TrieNode* curr = root; 

            for(const char c: key){
                if(curr->child[c - 'a'] == nullptr){
                    return false; 
                }
                //Move the pointer to newly created node: 
                curr = curr->child[c-'a']; 
            }
            return true; 
        }
};


#endif