#ifndef NODE_H
#define NODE_H

class Node{  
    public:
        int data; 
        Node* next; 
        Node(){
            this->data = 0; 
            this->next = nullptr;
        }
        Node(int data){
            this->data = data; 
            this->next = nullptr; 
        }

};

#endif