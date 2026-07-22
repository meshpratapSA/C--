#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;

public:
    void createAccount() {
        accountNumber = 1001; // Example account number
        name = "NIRAV AYER"; // Example name
        balance = 1000.0; // Example initial balance
    }

    void deposit(double amount) {
        balance += amount;   
    }

    void withdraw (double amount) {
        balance -= amount;
    }

    void display () {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount customer;

    customer.createAccount();
    customer.deposit(500.0); // Deposit 500
    customer.withdraw(200.0); // Withdraw 200
    customer.display(); // Display account details

    return 0;
}