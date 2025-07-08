// lamda functions
// nothing , just a function with no name and mostly used in frameworks,
// and used at once not always,

#include <iostream>
using namespace std;

int main(){

    // [](){
                        // this is representation of lamda function
                        // a semi-colon at end 
    // };

    // how to execute?

    // there is a data type 'auto' for this.

    auto checkTemp = [](int temp){
        cout << "Your c++ have 11+ version to run this" << endl;
    };
    checkTemp(4); // this will give the output.
    return 0;
}