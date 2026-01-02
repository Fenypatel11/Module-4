#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
   
    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited Rs. " << amount << " into account. New balance: Rs. " << balance << std::endl;
        } else {
            std::cerr << "Error: Deposit amount must be positive." << std::endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                std::cout << "Withdrawn Rs. " << amount << " from account. New balance: Rs. " << balance << std::endl;
            } else {
                std::cerr << "Error: Insufficient balance." << std::endl;
            }
        } else {
            std::cerr << "Error: Withdrawal amount must be positive." << std::endl;
        }
    }

   
    double getBalance() const {
        return balance;
    }
};

int main() {
    
    BankAccount account1(123456, 1000.0);

    
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.withdraw(1500.0); 

    
    std::cout << "Current balance: Rs. " << account1.getBalance() << std::endl;

    return 0;
}

