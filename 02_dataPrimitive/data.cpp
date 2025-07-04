/* 
Data are of 3 types (primitive) (derived) and (user-defined)

primitive means that are inbuilt ie. int float double boolean string
void etc. 

derived means we can use primitive in some more upgraded version ie.
array,function,pointer and reference.

and user-defined is something like Enum,union,class,typedef
*/


#include <iostream>
using namespace std;
int main(){
    int teaLeaves = 50;
    float waterTempreture = 85.2728847274;
    double priceOfTea = 299.84537827376579;
    char gradeOfTea = 'A';
    bool masalaTea = false;

    cout << priceOfTea << endl;
    return 0;
}

/* here we have check the value coming out after changeing the inputs again and again.
so, if we will say Ab in char it will generate warning but output as b , if we will say 5 in
place of false it will output as 1. and the precision of float is rounding of the 4th digit
where as double is giving only upto 3 decimal place.*/