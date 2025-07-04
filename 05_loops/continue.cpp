// Challenge: Write a program that skips brewing green tea 
// if the user dislikes it. Use a continue 
// statement to skip over green tea but brew other types of tea in a list.
#include <iostream>
#include <string>
using namespace std;
int main(){

    // let's make a program for skipping a value when it come 
    string teaTypes[3] = {"Green Tea","Masala Chai","Lemon Tea"};
    // this is for making a array or list

    for (int i = 0 ; i<3 ; i++){
        if (teaTypes[i] == "Green Tea"){
            //skip this using continue
            continue;
        }
        cout << "Your order is " << i << endl;
        cout << "Your order name is " << teaTypes[i] << endl;
    }


    return 0;
}