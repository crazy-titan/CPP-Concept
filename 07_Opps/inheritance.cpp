#include <iostream>
#include <string>

using namespace std;

// here we will expose the protected data , and also see some virtual distructor
// and 'final' keyword to see what it do while calling it.



// make your main/base/original class first
class Tea{
    protected:
        string teaName;
        int servings;

    public:
        // we know if we are making objects we need to make a constructor.
        Tea(string name, int serve): teaName(name),servings(serve){}

        // make a virtual function
        virtual void brew() const{ // const is to not change value.
            cout << "Brewing "<< teaName << endl;
        }

        // if constructor is there than also make a destructor for it
        // here lets make a virtual destructor.
        virtual ~Tea(){
            cout << "Virtual Disctructor called: "<< endl; 
        }
};

// now make the derived class with the main class "Tea"

class GreenTea:public Tea{
    // now here lets suppose your constructor is getting one parameter.
    public:
        GreenTea(int serve): Tea("GREEN TEA",serve){}
        // in above line i just use the base class 'Tea' to inheritance the value.
        // here i use the base constructor value to execute my GreenTea constructor.

        // make a override now
        void brew() const override{
            cout << "Overide the Brew, Now brewing: " << teaName << endl;
            // here you can see i can access the protected variable which is called inheritance.

        }

        // now make a destructor.
        ~GreenTea(){
            cout << "Green Tea Destructor Called: " << endl;
        }
};

// make another class now

class MasalaTea: public Tea{
    // we can use the GreenTea class also here, but lets use base class Tea again.
    public:
        // make constructor
        MasalaTea(int serve): Tea("MASALA TEA",serve){}

        // again override the brew function.
        void brew() const override final{ // here i use 'final' which mean if someone want to override this , they can't.
                                            // this case will come if someone derive the new class from 'Masala Tea'.
            cout << "Masala Tea override: "<< teaName<< endl;
        }

        // make a destructor
        ~MasalaTea(){
            cout << "Masala Tea destructor called: "<< endl;
        }
};

int main(){

    // make some objects
    // GreenTea greenTea(1);

    // here we will see the pointers concept little bit

    Tea* teaOne = new GreenTea(3); // its a pointer which is referencing to the base class "Tea"
    Tea* teaTwo = new MasalaTea(4);

    // now by using '->' you can access the properties.
    teaOne->brew();
    teaOne->~Tea();

    teaTwo->brew();
    teaTwo->~Tea();

    // now delete the dynamic alloted memory.
    delete teaOne;
    delete teaTwo;
    
    return 0;
}