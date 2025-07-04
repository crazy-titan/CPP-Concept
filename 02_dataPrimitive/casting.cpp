/* this is basically conversion or conversion of different datatypes.*/


#include <iostream>
using namespace std;
int main(){
    int quantityOfTea = 2;
    float priceOfTea = 30.768;
    int newPrice = (int) priceOfTea; // rounding the value of priceOfTea.
    int newPrice = (short) priceOfTea; /*output will be same becz you change in short but
    storing in int again.*/
    
    cout << newPrice << endl; 
}