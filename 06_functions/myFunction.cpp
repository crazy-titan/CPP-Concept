// In this file, we will learn about the functions

#include <iostream>
using namespace std;

// int main(){
//     return 0;                 // this is MAIN function which is always present.
// }

// how to make custom funcitons?
// 1. Define data type that will be output.
// 2. Give a meaningfull name to your function.
// 3. give the parameter type and its name or you can just leave empty.
// 4. Calling of this function inside the MAIN function.


// declaration of function
int checkTemperature(int parameter);

// defenation of function
int checkTemperature(int parameter){
    return parameter;
}

// we can use declaration and defination together or different, depands on you.

// declaration and defination of functions. eg:-

void serveChai(){
    cout << "Serving a cup of Tea" << endl; 
} // here we can see fucntion will return nothing (void).


// what is formal , actual and default parameters of a function?

// when we define a variable inside a block {} its formal.
// when we define a variable inside calling () the function form MAIN function. its actual
// when we define a vaiable inside the parameter block in case nothing input given, its default


void chaiServe(string teaName = "Lemon Tea") { // Lemon Tea will output, if user give no input while calling chaiServe.
    int noChai = 0; // formal parameter
    cout << "Serving "<< teaName << endl;
}

// MAIN function 
int main(){
    chaiServe("Ginger Tea"); // actuall parameter = Ginger Tea will be output.
    chaiServe(); // in this case default value will output. = Lemon Tea
    //checkTemperature(5); // this will not show anything , we have to store and then print
    int temp = checkTemperature(5);
    cout << temp;
    return 0;
}


// what is function overLoading?
// two or more fuctions can have same name, 
//but they can be diffenciate by parameters. weather its int, string or nothing.