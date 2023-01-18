#include<iostream>
#include<string>
using namespace std;
class Account {
private:
    int accountNumber;
    string accountName;
    
public:
    double accountBalance;
    Account()
    {
    }
    int setAccountNumber(int Number)
    {
        accountNumber = Number;
        return Number;
    }
    string setAccountName(string Name)
    {
        accountName = Name;
        return Name;
    }
    double setAccountBalance(double Balance)
    {
        accountBalance = Balance;
        return Balance;
    }
    void deposit(double amount) 
    {
        accountBalance = accountBalance + amount;
        cout << "You have deposited " << amount << " into your account" << endl;
    }
    void withdraw(double amount)
    {
        accountBalance = accountBalance -  amount;
        cout << "You have withdrawn " << amount << " from your account" << endl;
    }
    void displayAccountInfo() 
    {
        cout << "Your account name is " << accountName << endl;
        cout << "Your account number is " << accountNumber << endl;
        cout << "Your balance is " << accountBalance << endl;
    }
    void displayBalance()
    {
        cout << "Your balance is " << accountBalance << endl;
    }
};
class SavingAccount: public Account
{
public:
    double interestRate = 0.25; //interest rate is defined as 25%

  double calculateInterest()
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
    Abdullah.setAccountName("Abdullah Shawani");
    Abdullah.setAccountNumber(1);
    Abdullah.setAccountBalance(7500);
    Abdullah.displayAccountInfo();
    Abdullah.deposit(1200);
    Abdullah.displayBalance();
    Abdullah.calculateInterest();
    Abdullah.withdraw(350);
    Abdullah.displayBalance();
    Abdullah.calculateInterest();
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