// Challenge: Create a program that asks the user if 
// they want more tea. Keep asking them until 
// they type "no" (case-insensitive), using a do-while loop.
#include <iostream>
#include <string>
using namespace std;
int main(){
    // do while is the loop in which it do work first than check the conditions.
    /* it will do again and again if while codition is true*/
    string response;
    do {
        cout << "You want more tea?\n";
        cin >> response;
    } while (response != "no");
}
// first we write it as = "no" but due to this the loops is throwing the question again,
// to avoid this we will set this as when not equall to "no" then throw question.