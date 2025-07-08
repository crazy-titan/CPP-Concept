// pass by reference of a function.
// here you can directly change is original data, ie, you have git access
// of repository etc

// nothing different than call by value, just add '&' in front of parameter.

#include <iostream>
using namespace std;

void teaCups(int &cups){
    cups += 5;
    cout << "You have ordered "<< cups << " cups of tea"<< endl; // 8 is output
}

int main(){
    int chaiCup = 3;
    teaCups(chaiCup);
    cout << "Total number of Cups " << chaiCup ; // output is 8 here
    return 0;
}
