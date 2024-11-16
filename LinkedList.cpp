#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include<iostream> 
using namespace std; 

#include "Node.cpp"

class LinkedList{
    private: 
        Node* head; 
    public: 
        LinkedList(){
            head = nullptr; 
        }
        void insertHead(int data){  
            Node* newNode = new Node(data); 

            if(head == nullptr){
                head = newNode; 
                return; 
            }
            newNode->next = head; 
            head = newNode; 
        }
        void insertLast(int data){
            Node* newNode = new Node(data); 
            Node* tempt = head; 
            if(head == nullptr){
                head = newNode;
                return; 
            }
            while(tempt->next != nullptr){
                tempt = tempt->next; 
            }
            tempt->next = newNode; 
        }

        void insertAfter(int key, int data){
            Node* newNode = new Node(data); 
            Node* tempt = head; 

            if(tempt == nullptr){
                head = newNode; 
            }
            while(tempt != nullptr){
                if(key == tempt->data){
                    newNode->next = tempt->next; 
                    tempt->next = newNode; 
                }
                tempt = tempt->next; 
            }
        }

        void remove(int data){ //Remove with a key: data
            Node* prev = head; 
            Node* tempt = prev; 
            bool is_deleted = false; 
            if(tempt == nullptr){
                cout << "No Node in the List" << endl; 
                return; 
            }
            while(tempt != nullptr){
                if(tempt->data == data){
                    prev->next = tempt->next;
                    delete tempt; 
                    return; 
                }
                prev = tempt; 
                tempt = tempt->next; 
            }

            if(!is_deleted){
                cout << "No such Node in the list" << endl; 
            }

        }

        void remove_end(){
            Node* prev = head; 
            Node* tempt = prev; 
            while(tempt->next!=nullptr){
                prev = tempt; 
                tempt = tempt->next; 
            }
            prev->next = nullptr; 
            delete tempt; 
        }

        void print(){
            Node* temptNode; 
            temptNode = head; 
            if(temptNode == nullptr){
                cout << "Empty List" << endl; 
                return; 
            }
            while(temptNode != nullptr){
                cout << temptNode->data << endl; 
                temptNode = temptNode->next; 
            }
        }
};

#endif