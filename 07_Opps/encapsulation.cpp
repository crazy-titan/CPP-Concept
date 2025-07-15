#include<iostream>

using namespace std;



class BankAccount{
    private:
        string accountNumber; // i am supposing number + alphabets
        double balance;

    public:
        BankAccount(string accNum, double Balce){
            accountNumber = accNum;
            balance = Balce;
        }
        // make getter function to check the balance
        double getBalance(){
            return balance;
        }
        // make some function to add some balance
        // type will be void becz nothing i am getting.
        void deposite(double amount){
            if(amount > 0){
                balance += amount; 
                cout << "You have deposited: "<< amount<<endl;
            }else{
                cout << "Enter a Valid amount."<< endl;
            }
        }
        // make a function that withdraw some amount.
        void withdraw(double amout){
            // checking
            if(amout > 0 && amout <= balance){
                 balance -= amout;
                 cout << "You have withdraw: "<< amout<<endl;
            }else{
                cout << "Enter a Valid amount."<< endl;
            } 
        }
};
int main (){

    BankAccount myAccount("12abhi",300.45);
    

    // some more
    myAccount.deposite(100);
    myAccount.withdraw(200);

    //
    myAccount.getBalance();
    cout<< "Your Balance is: "<< myAccount.getBalance()<< endl;
    return 0;
}