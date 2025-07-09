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

        // parameter constructor
        ChaiCups(string konSiChai,int kitniChai,vector<string> itemsReq){

            // now just replace these parameter in below
            teaName = konSiChai; //"Unknown Tea"
            servings = kitniChai; // 1
            ingredients = itemsReq; //{"water","tea-leaves"}
            cout << "You called the param constructor"<< endl; // this will execute first in backend
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

    //ChaiCups chaiOne;

    // let's suppose you want to get the output in one line eg;
    // ChaiCups chaiOne("lemon Tea", 1,{"water","lemon","honey"}) and then use display method.

    // in that case you have to make a parameter constructor, nothing hard just like
    // default ,but this time you have to define a parameter there, see above

    // now check
    ChaiCups chaiOne("lemon Tea", 1,{"water","lemon","honey"});
    chaiOne.displayIngre();
    return 0;
}
