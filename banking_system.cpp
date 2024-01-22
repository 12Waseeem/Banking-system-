#include <iostream>
#include <vector>

class BankAccount {
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(std::string name, int number) : accountHolderName(name), accountNumber(number), balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    void displayBalance() const {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Current Balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a vector to store bank accounts
    std::vector<BankAccount> accounts;

    // Sample usage
    BankAccount account1("John Doe", 1001);
    accounts.push_back(account1);

    account1.deposit(1000);
    account1.withdraw(500);
    account1.displayBalance();

    return 0;
}