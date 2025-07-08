#include<iostream>
using namespace std;

// can i return an array through calling function?

// answer is no, but you can use the pointers to return the base addresss or 
// you can say first index address and than by knowing the size of array, you can
// easily access array as an output with calling the function.


int* giveMeAddress(int cups){
    int* addressOfDynamicArray = new int[cups]; // making the array of size "cups"
    // and storing its value in a pointer again because we got address from "new".

    for(int i = 0 ; i < cups ; i++){
        addressOfDynamicArray[i] = (i+10)*2;
    }
    return addressOfDynamicArray;
}

int main(){
    int chai = 5;
    int* output = giveMeAddress(chai); // return pointer aaya, isliye hold bhi pointer m kiye.

    for(int i = 0; i < chai ; i++){
        cout << "Your Address is " << (i+1) << " and value is " << output[i]<< endl;
    }


    delete[] output; // this is very important otherwise, memory leak
    return 0;
}