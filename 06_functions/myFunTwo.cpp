// call by value , funcitons, 
// no change in reference, eg: download something form internet and edit locally.

#include <iostream>
using namespace std;

void teaCups(int cups){
    cups += 5;
    cout << "You have ordered "<< cups << " cups of tea"<< endl; // 8 is output
}

int main(){
    int chaiCup = 3;
    teaCups(chaiCup);
    cout << "Total number of Cups " << chaiCup ; // output is 3 here
    return 0;
}

// keep eye on MAIN function you are giving argument and its going to parameter of
// above function.
