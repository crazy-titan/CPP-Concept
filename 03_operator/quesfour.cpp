// Challenge 4: Bitwise Operators
// Write a program that uses 
// bitwise AND (&) to check which tea types are in stock.
// The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong).
// Allow the user to check availability by inputting the tea type (1, 2, or 4),
// and display a message saying whether that tea is in stock or not.



#include <iostream>
using namespace std;

int main() {
    // Stock encoding: 1 = Green, 2 = Black, 4 = Oolong
    int stock = 5;  // Example: Green and Oolong are in stock (binary 101)
    int teaType;

    cout << "Enter tea type (1 for Green, 2 for Black, 4 for Oolong): ";
    cin >> teaType;

    // Check if the input is valid
    if (teaType == 1 || teaType == 2 || teaType == 4) {
        if (stock & teaType) {
            if (teaType == 1) cout << "Green Tea is in stock." << endl;
            else if (teaType == 2) cout << "Black Tea is in stock." << endl;
            else if (teaType == 4) cout << "Oolong Tea is in stock." << endl;
        } else {
            if (teaType == 1) cout << "Green Tea is NOT in stock." << endl;
            else if (teaType == 2) cout << "Black Tea is NOT in stock." << endl;
            else if (teaType == 4) cout << "Oolong Tea is NOT in stock." << endl;
        }
    } else {
        cout << "Invalid tea type. Please enter 1, 2, or 4." << endl;
    }

    return 0;
}

