// Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups
// or if they are a member for more than a year.
// Write a program that checks if the user qualifies
// for a discount based on their input.

#include <iostream>
using namespace std;
int main(){
    int numberOfCups;
    bool memForOneYear;
    cout << "How many tea cups you need? :" << endl;
    cin >> numberOfCups;
    cout << "Are you member for more than one year? (for yes,enter 1 and for no, enter 0)"<<endl;
    cin >>  memForOneYear;

    if(numberOfCups > 12 || memForOneYear){
        cout << "You have a discount offer:" <<endl;
        
    }else {
        cout << "Thanks for coming:"<< endl;
    }

    return 0;
}
