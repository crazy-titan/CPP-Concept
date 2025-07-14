#include<iostream>
#include<string>
#include<vector>

using namespace std;

// What is getter setter?
// its basically like friend of a class, which also give you authority to 
// mannpulate the data(Private,Protected) of the class.

// we just CAPATALISE the variable and add a 'get' and 'set' in front of it.


class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(string name,int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;
        }

        void displayDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredents: ";
            for(string i: ingredients){
                cout << i;
            }cout<< endl;
        }

        Chai():teaName("Unknown Tea"),servings(1),ingredients({"Masala ","honey ","water "}){}
  
        // to access and modify using get set we need to make them first.
        
        // getter (define what you get first, int, vector , string etc.)
        string getTeaName(){
            return teaName ;
        }

        // setter for above(while setting we dont give anything so use void)
        void setTeaName(string name){   
           teaName = name; // use your logic here to output in different style.
        }

        // getter for servings
        int getServings(){
            return servings;
        }

        // setter for the servings
        void setServings(int serve){
            servings = serve; // use logic to manipulate
        }


        // now getter for vectors
        vector<string> getIngredents(){
            return ingredients;
        }

        // setter for vectors
        void setIngredents(vector<string> ingre){
            ingredients = ingre; // use logics if you want 
        }
// now you can easily use the calling get , set from main functions check....
};



int main(){
    Chai chaiOne;
    // we need to access and modify the private data using "get" & "set"


    chaiOne.setTeaName("Mango Tea");
    chaiOne.setServings(4);
    chaiOne.setIngredents({"chaiPati "," cpp-chai-walla ","logic-h-bhai "});
    chaiOne.displayDetails();

    return 0;
}

// just make the get set and perform you work set values , values are private but
// we can access and modify them.