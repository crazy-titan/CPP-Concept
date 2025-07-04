#include <iostream>
using namespace std;
int main(){

    int tea;
    double teaPrice,totalPrice,discountedPrice;
    cout << "Enter how many tea you want:" << endl;
    cin >> tea;
    cout << "Enter at what price (1 cup) tea you want:" << endl;
    cin >> teaPrice;
    totalPrice = tea * teaPrice;
    // now make a condition if totalPrice exceeds 100 than give 5% discount.
    if (totalPrice> 100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Your discounted Price is:" << discountedPrice;
    }else {

        cout<< "Your total Price is" << totalPrice;
    }
        /* its very wisely written below the if becz that should be display
        if totalPrice is less than 100*/
    return 0;
}