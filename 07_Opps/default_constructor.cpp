#include<iostream>
#include<string>
#include<vector>

using namespace std;

// what is constructor?
// its a type of function or methods which is called when you make an object from class.
// its not visible but you can make your own and set the parameters in it.

// its same name as of your class and (){};

class ChaiCups{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // default constructor
        ChaiCups(){
            // we can also set some default values here. ie
            teaName = "Unknown Tea";
            servings = 1;
            ingredients = {"water","tea-leaves"};
            cout << "You called the constructor"<< endl; // this will execute first in backend
        }

        void displayIngre(){
            cout << "Tea you have selected is: "<< teaName<<endl;
            cout << "No. of servings: "<< servings<<endl;
            cout << "ingredients: ";
            for(string index:ingredients){
                cout << index<<" "; // index is variable like 'i'
            }
        }
};
int main(){

    ChaiCups chaiOne;
    chaiOne.displayIngre();
    

    return 0;
}

// this is whole default constructor where you can just assign a default values
// in case you didn't get any input.