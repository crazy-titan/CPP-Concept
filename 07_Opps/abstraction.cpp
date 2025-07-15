#include <iostream>
using namespace std;
// what is abstraction class?
// when we use a virtual function inside a class its know as abstruction
// never make any object with abstraction class becs abstraction always override by derived class.
// abstruction give you expose to many predefine functionalty and help you to perform certain task.

class Tea{
    // make a function and write 'virtual' in front of it, to make abstruction class.
    public:
        virtual void prepareTea() = 0; // declare not define, becz it will get override.
        virtual void serve() =0; // pure virtual function
        virtual void brew() = 0;

        // make a function that is common for all derived class exectution.
        void orderTea(){
            // call the above function as it is here.
            void prepareTea();
            void serve();
            void brew();
        }
};
// now make a derived class

class GreenTea: public Tea{ // derived from Tea class (above)

    // now call the functions 
    public:
        void prepareTea() override{
            cout << "Preparing the Tea: " << endl;
        }
        void serve() override{
            cout << "Serving the Tea: " << endl;
        }
        void brew() override{
            cout << "Brewing the Tea: "<< endl;
        }
};


// make another derived class
class MasalaTea: public Tea{
    // now call the functions 
    public:
        void prepareTea() override{
            cout << "Preparing the Tea: " << endl;
        }
        void serve() override{
            cout << "Serving the Tea: " << endl;
        }
        void brew() override{
            cout << "Brewing the Tea: "<< endl;
        }
};

// after this you can call the orderTea directly for each derived class
// this is very helpful while you are make any IOS application like camera etc.

int main(){

    GreenTea greenTea; // made an object from GreenTea class.
    MasalaTea masalaTea; // made an object from Masala Tea.

    greenTea.orderTea(); // now you can use this orderTea which is not 
    // mentioned in GreenTea and Masala Tea either.
    return 0;
}