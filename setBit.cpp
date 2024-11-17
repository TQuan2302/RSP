#include<iostream>
using namespace std; 

// Function to set the ith bit of the
// given number num
int setBit(int num, int i)
{
    // Sets the ith bit and return
    // the updated value
    return num | (1 << i);
}

int clearBit(int num, int i){
    return num & ~(1 << i); 
}

int main(){
    cout << setBit(43, 2)<< endl ;
    return 0; 
}