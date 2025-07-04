// Challenge: Write a program that keeps track of tea orders. 
// Each time a cup of tea is made, decrease the number of cups remaining.
// The loop should run until all cups are served.

#include <iostream>
using namespace std;
int main(){

//serve the tea until it ends
int teaCups;
cout << "Enter your number of teaCups you want:";
cin >> teaCups;
while(teaCups > 0){
    teaCups -= 1; // position of this will decide what will be the output.
    cout << "Your tea is served:\n";
    cout << "Remaining:" << teaCups << endl;
}
    return 0;
}