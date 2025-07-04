// Challenge: Write a program that keeps serving tea 
// until the user says they’ve had enough (input 'stop'). 
// Use a break statement to exit the loop when the user types 'stop'.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string response;
    while(true){
        cout << "You want some more tea? type \"stop\" to exit.";
        getline (cin,response);

        if (response == "stop"){
            break;
            // this break will just throw out everything out of the while loop.
        }
        cout << "Another tea cups is ready to be served.\n";
    }
    cout << "NO more tea cups are served.";
    return 0;
}
// break is jumping directly out of the parent function.
// whereas continue will just jump out of its present function