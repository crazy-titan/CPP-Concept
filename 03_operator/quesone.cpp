// Challenge 1: Arithmetic Operators
// Write a program that calculates the price of tea packs.
// A user enters the number of tea packs they want,
// and the price per pack. Apply a 10% tax to the total price and
// display the final cost.

#include <iostream>
using namespace std;
int main(){
    int cups;
    double pricePerCup,totalPrice,discountPrice;

    cout << "Number of tea cups you need?:" << endl;
    cin >> cups;
    cout << "At what price you want per cup?:" << endl;
    cin >> pricePerCup;

    totalPrice =  cups * pricePerCup;
    discountPrice = totalPrice - (totalPrice * 0.1);
    cout << "Here's your total price after discount: "<< discountPrice << endl;
    return 0;
}