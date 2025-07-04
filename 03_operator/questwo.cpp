// Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have.
// If the number is less than 20,
// give them 10 extra bags using the += assignment operator.
// Display the updated total.

#include <iostream>
using namespace std;
int main(){
    int bags;
    cout << "How many bags you have?:" << endl;
    cin >> bags;

    //conditions
    if(bags < 20){
        // bags = bags + 10;
        bags += 10;
        // cout << "You have now : " << bags << "number of bags" << endl;
    }
    cout << "You have now : " << bags << " numbers of bags" << endl;


    return 0;
}