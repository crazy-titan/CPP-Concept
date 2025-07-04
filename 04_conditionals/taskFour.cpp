/* This is basically about how the flow of code will go from top to bottom.
we have done 4 tasks in this sections 


After all the task we come to know about the switch case thing in which we 
wrtie the variable that we want to match and the case (the case you waant to match)
after this you have to write the break to avoid waterfall in your code.*/


// switch case 

#include <iostream>
using namespace std;
int main(){
    
    int choice;
    double price;

    cout << "Select your choice\n:";
    cout << "1: Lemon Tea\n";
    cout << "2: Masala Tea\n";
    cout << "3: Ginger Tea\n";
    cout << "Enter your choice in numbers (1-3)";
    cin >> choice;


    switch (choice){
        case 1:
            price = 2.0;
            cout << "You have Selected Lemon Tea of Price:" << price << endl;
            break;
        case 2:
            price = 3.0;
            cout << "You have Selected Masala Tea of Price:" << price << endl;
            break;
        case 3:
            price = 4.0;
            cout << "You have Selected Ginger Tea of Price:" << price << endl;
            break;
        defaul:
            cout << "Invalid choice";
    }
    return 0;
}