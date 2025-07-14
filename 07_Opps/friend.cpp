#include<iostream>
#include<string>

using namespace std;

// What is Friend Class or function?
// this is mentioned inside a class to instruct the mentioned class or functions
// to access the private or protected data of the class in which friend is mentioned;

class Chai{
    private:
        string teaName;
        int servings;

    public:
        Chai(string chaiKaNaam, int kitnaChai): teaName(chaiKaNaam),servings(kitnaChai){}

        // this is also the method to make a constructor(parameter).
        // now make a friend function (updated info.)
        friend bool compareChai(const Chai &chai1,const Chai &chai2);

        void display(){
            cout << "Tea Name: "<< teaName<< endl;
            cout << "No. of Servings: "<< servings << endl;
        }
};

// make the compareChai function here 
bool compareChai(const Chai &chai1,const Chai &chai2){
    return chai1.servings > chai2.servings;
}// will return true or false will go data from friend function and then output.


int main(){

// lets make a parametrise constructor

    Chai masalaChai("Masala Tea",1);
    Chai lemonChai("Lemon Tea",4);


    masalaChai.display();
    lemonChai.display();

    if(compareChai(masalaChai,lemonChai)){
        cout << "MasalaChai have MORE in Number:" << endl;
    }else{
        cout << "LemonChai have MORE in Number:" << endl;
    }
    return 0;
}