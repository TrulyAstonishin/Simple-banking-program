#include<iostream>
#include<string>
using namespace std;
class Account // defining inhereted class
{
private:
    int accountNumber;
    string accountName;
    
public:
    double accountBalance;
    Account() //constructor
    {
    }
    int setAccountNumber(int Number) //sets account number
    {
        accountNumber = Number;
        return Number;
    }
    string setAccountName(string Name) //sets account name
    {
        accountName = Name;
        return Name;
    }
    double setAccountBalance(double Balance) //sets account balance
    {
        accountBalance = Balance;
        return Balance;
    }
    void deposit(double amount) //deposits amount to current balance
    {
        accountBalance = accountBalance + amount;
        cout << "You have deposited " << amount << " into your account" << endl;
    }
    void withdraw(double amount) //withdraws amount from current balance
    {
        accountBalance = accountBalance -  amount;
        cout << "You have withdrawn " << amount << " from your account" << endl;
    }
    void displayAccountInfo() //displays account name, number and balance 
    {
        cout << "Your account name is " << accountName << endl;
        cout << "Your account number is " << accountNumber << endl;
        cout << "Your balance is " << accountBalance << endl;
    }
    void displayBalance() //displays account balance
    {
        cout << "Your balance is " << accountBalance << endl;
    }
};
class SavingAccount: public Account //defining inhereting class
{
public:
    double interestRate = 0.25; //interest rate is defined as 25%

  double calculateInterest() //calculates interest using the formula interest rate multiplied by balance
    {
        double interest;
        interest = accountBalance * interestRate;
        cout << "Your interest is " << interest << endl;
        return interest;
    }
};
int main()
{
    //Account for me
    SavingAccount Abdullah;
    Abdullah.setAccountName("Abdullah Shawani"); //sets name of the account
    Abdullah.setAccountNumber(1); //sets account number
    Abdullah.setAccountBalance(7500); //sets account balance
    Abdullah.displayAccountInfo(); //displays Account name, number and balance
    Abdullah.deposit(1200); // adds the amount to the account balance and informs user of success
    Abdullah.displayBalance(); //displays current balance
    Abdullah.calculateInterest(); //calculates current interest
    Abdullah.withdraw(350); // takes away the amount from the account balance and informs user of success
    Abdullah.displayBalance(); //displays current balance
    Abdullah.calculateInterest(); //calculates current interest
    cout << "\n";
    //Example account
    SavingAccount John;
    John.setAccountName("John Doe");
    John.setAccountNumber(0);
    John.setAccountBalance(12300);
    John.displayAccountInfo();
    John.deposit(7800);
    John.displayBalance();
    John.calculateInterest();
    John.withdraw(5900);
    John.displayBalance();
    John.calculateInterest();
}