#include <iostream>
using namespace std;
int main(){

    int totalBags;
    cout << "Enter the number of Bags you have:" << endl;
    cin >> totalBags;
    if (totalBags < 10){
        totalBags += 5; // this says that the left side value has added more 5 values to same itself.
        cout << "You have total" << totalBags << "Bags." << endl;
    }else {
        cout<< "You already have Bags more than 10:" << endl;
    }

    return 0;
}