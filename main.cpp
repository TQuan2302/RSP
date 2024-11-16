#include<iostream>
using namespace std; 
#include"Node.cpp"
#include"LinkedList.cpp"

int main(){
    LinkedList list; 
    list.insertLast(15); 
    list.insertLast(13); 
    list.insertLast(10); 
    list.insertAfter(13,105);
    list.remove_end();
    list.print(); 
    return 0;
}