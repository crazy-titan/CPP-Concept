// Challenge 1: If Statement
// Write a program that asks the user for their favorite tea.
// If they choose "Oolong," print a message saying, "You have excellent taste!"

#include <iostream>
#include <string>

using namespace std;
int main(){
    string selectedTea;
    cout << "Enter you preferd tea name :" << endl;
    cin >> selectedTea;

    if (selectedTea == "Oolong"){
        cout << "You have excellent taste:" << endl;
    }

    return 0;
}

// don't do extra than what they say to do.