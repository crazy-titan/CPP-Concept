// /* make a program in which a coustemer is ordering tea.*/
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     string teaName;
//     int quantityOfTea;
//     cout << "Which Tea will you prefer today?\n" << endl;
//     getline(cin,teaName);
//     cout << "How many cups of Tea?\n" << endl;
//     cin >> quantityOfTea;

//     // now show the all details of order

//     cout << teaName<< "\tand number is \t"<< quantityOfTea << endl;


//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;
int main(){
    string teaName;
    int teaQuantity;
    cout << "Which Tea you want?\n" << endl;
    getline(cin,teaName);
    // cin >> teaName; // this is also the way of taking the input.
    cout << "How many of such tea you need? \n" << endl;
    cin >> teaQuantity;

    cout << "You have selected " << teaName << " and these are "<< teaQuantity <<endl;
    //teaName[1];for checking question.

    return 0;
}

// i mistype the string as GINGER TEA
// 1 

// so the output will be 1 , why?
// this is revision two