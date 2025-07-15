#include<iostream>
#include<vector>
#include<string>

using namespace std;

// what is delegating constructor?
// let's suppose if we get only one argument while calling than how to execute?
// in that case we simply call another constructor to perform task.

class Chai{
    public:
        string teaName;
        int serveings;
        vector<string> ingredents;

        // make a parameter constructor
        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            serveings = serve;
            ingredents = ingre;
            // this is just normal things all have to do.

            // lets suppose we only get one argument from user then how to handle?

            // make a delegation constructor(see below this line)

        }

        Chai(string name): Chai(name,1,{"water ","honey ","Sugar "}){} 


        void displayDetails(){
            cout << teaName << endl;
            cout << serveings << endl;
            for(string i: ingredents){
                cout << i;
            }
            cout << endl;
        }

    };



int main(){

    Chai quickChai("Quick Tea");
    quickChai.displayDetails();

    return 0;
}