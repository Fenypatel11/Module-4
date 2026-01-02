#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
	private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

	public:
    
    void assignValues(string name, int accNumber, string accType, double initialBalance) 
	{
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    
    void deposit(double amount) 
	{
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: Rs. " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    
    void display() const 
	{
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() 
{
    
    BankAccount myAccount;

    
    myAccount.assignValues("Devarsh", 123456, "Savings", 10200.0);

    
    myAccount.display();

    
    myAccount.deposit(500.0);

    
    myAccount.withdraw(200.0);

    
    myAccount.display();

    return 0;
}

