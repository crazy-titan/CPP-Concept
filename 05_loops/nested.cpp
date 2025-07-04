// Challenge: Write a program that brews multiple cups of different types of tea.
//  For each type of tea, brew 3 cups using a nested loop.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string teaType[4] = {"Green Tea","Lemon Tea","Masala Tea","Ginger Tea"};

    for (int i = 0; i < 4 ; i++){
        cout << "Your " << teaType[i] << " is getting ready.\n";


        for(int k = 1; k <=3; k++){
            cout << "Brewing " << k << " cups of " << teaType[i]<<endl;
        }
// think one by one 
// i first print the tea names
// then i define a new inside the previous 
// then i make it like 3 times a single choice has to be brew;  
    }
    return 0;
}

