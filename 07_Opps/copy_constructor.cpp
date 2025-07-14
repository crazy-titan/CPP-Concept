#include<iostream>
#include<string>
#include<vector>

using namespace std;

// now we will see the use of copy constructor now.

class ChaiCups{
    public:
        string* teaName;
        int servings;
        vector<string> ingredients;

        // parameter constructor
        ChaiCups(string konSiChai,int kitniChai,vector<string> itemsReq){

            // now just replace these parameter in below
            teaName = new string(konSiChai); //"Unknown Tea"
            servings = kitniChai; // 1
            ingredients = itemsReq; //{"water","tea-leaves"}
            cout << "You called the param constructor"<< endl; // this will execute first in backend
        }
        
        void displayIngre(){
            cout << "Tea you have selected is: "<< *teaName<<endl;
            cout << "No. of servings: "<< servings<<endl;
            cout << "ingredients: ";
            for(string index:ingredients){
                cout << index<<" "; // index is variable like 'i'
            }
            cout << '\n'<< endl;
        }
        // what we gona do to check the use of copy constructor.
        // we use kid thinking to copy the data from object to other object
        // and then modify the original object data to see what will happen in 
        // copied object data.
        
        // what are the steps we do?
        //1. first go in main function and make a copied object from chaiOne object.
        //2. make a copy constructor by providing a dynamic memory to (teaName).
        //3. made a destructor.
        

        // copy constructor
        ChaiCups(const ChaiCups& copy){ // const, not to change what u got from original
            teaName = new string(*copy.teaName); // again we allot dynamic values
            servings = copy.servings;
            ingredients = copy.ingredients;
            cout << "copy constructor called" << endl; 
        }


        // destructor
        ~ChaiCups(){
            cout << "Destructor called:" << endl;
            delete teaName;
            // here we can delete the dynamic alloted memory
        }
        
        
        
    };
        
    int main(){

   
    ChaiCups chaiOne("lemon Tea", 1,{"water","lemon","honey"});
    chaiOne.displayIngre();

    // copy object
    ChaiCups copiedObject = chaiOne;
    copiedObject.displayIngre();
    // above case is not valid if i change the chaiOne data intentionaly.
    // so we need to make a destructor and a copy constructor here to make this happen.

    *chaiOne.teaName = "Modified Lemon Tea"; // if we don't make copy cons. it will show double free of object.
    chaiOne.displayIngre();

    // now
    cout << "see this" << endl;
    copiedObject.displayIngre(); // step1: now i can see this nothing change.

    // to make this happen we have to give the refernce to the copy constructor.


    //to remove the double free of object we make a copy constructor.

    return 0;
}
