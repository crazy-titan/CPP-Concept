// Challenge 3: Nested If-Else
// Write a program that checks the temperature of tea water input by the user:

// If the temperature is above 100°C, print "Too hot!"
// If the temperature is between 80°C and 100°C, print "Perfect temperature."
// If the temperature is below 80°C, print "Too cold!"


#include <iostream>
using namespace std;
int main(){
    double tempTea;
    cout << "Enter the tea water temperature according to you:" << endl;
    cin >> tempTea;

    if (tempTea > 100){
        cout << "Too hot!" << endl;
    }else if(tempTea > 80 && tempTea <=100){
        cout << "Perfect temperature:"<< endl;
    }else {
        cout << "Too cold!"<< endl;
    }
    return 0;
}