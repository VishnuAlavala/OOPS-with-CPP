#include <iostream>
class BankAccount {
private:
    std::string accountNumber;
    double balance;
public:
    BankAccount(const std::string &accountNumber, double initialBalance) {
        this->accountNumber = accountNumber;
        this->balance = initialBalance;
    }
    ~BankAccount() {
        std::cout << "Account " << accountNumber << " is being closed." << std::endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }
     void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }
    void displayAccountInfo() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};
int main() {
    BankAccount myAccount("123456", 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayAccountInfo();
    return 0;
}
