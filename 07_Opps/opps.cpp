#include <iostream>
#include <vector> // special type of array(fast random access)

using namespace std;

/*when you are making a class , use class in small and give the 
name of class starting with CAPITAL letter.
class includes data members(attributes),member functions(function inside the class)
and type public,private and protected , */

class Abhinav{
    public:
        string Chai; // name of tea
        int Servings; // number of tea servings
        vector<string> items; // list of items to show


        //member function

        void displayItems(){
            cout << "Teaname: " << Chai << endl;
            cout << "Tea Quantity: " << Servings << endl;
            cout << "Items: ";
            for(string item:items){
                cout << item << " ";
                // to access the items array ie. items[i]
            }
            cout << endl;
        }
    private:
        string company; // just for example
};

/* you can make the object now anywhere , but you have to keep in mind
you have the access first, right now i am making object inside the main function*/

int main(){
    //making object
    Abhinav abhinavOne;
    abhinavOne.Chai = "Oolong Tea";
    abhinavOne.Servings = 4;
    abhinavOne.items = {"water","sugar","tealeaves"};

    //calling the function to display
    abhinavOne.displayItems();


    //now we can make as many objects as i want.
    Abhinav abhinavTwo;

    abhinavTwo.Chai = "Lemon Tea";
    abhinavTwo.Servings = 2;
    abhinavTwo.items = {"lemon","water","Honey","Tea"};

    // now display the items
    abhinavTwo.displayItems();
    return 0;
}