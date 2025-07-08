#include<iostream>
using namespace std;

// giving array and its size as placeholder or parameter.

int chaiTemp(int cups[],int size){
    int total = 0;
    for(int i = 0; i < size;i++){
        total = total + cups[i]; // total += cups[i]
    }
    return total; // because we define int at first
}

int main(){

    int array[4] = {10,20,30,40};
    int finalTotal = chaiTemp(array,4); // calling the chaiTemp function.

    cout << finalTotal;
    return 0;
}