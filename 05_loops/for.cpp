// Challenge: Write a program that prints the brewing instructions
// for making 5 cups of tea. The brewing process should be
// printed once for each cup using a for loop.
#include <iostream>
using namespace std;
int main(){
    int teaCups = 5;
    for (int i = 1; i <= 5;i++){
        cout << "Tea number " << i << " is ready to serve." << endl;
    }
    cout << "Loops ended here";
    return 0;
}
/* for loop comes with 3 parameters intialize , condition and increment*/