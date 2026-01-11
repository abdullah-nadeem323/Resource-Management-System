#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    // Constructor
    BankAccount(const string& n, double b) : name(n), balance(b) {
        cout << "BankAccount constructor called" << endl;
        if (b < 0) {
            throw invalid_argument("Invalid account creation: negative balance");
        }
    }

    // Destructor
    ~BankAccount() {
        cout << "BankAccount destructor called for " << name << endl;
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error("Withdrawal failed: insufficient balance");
        }
        balance -= amount;
        cout << "Withdrawal successful. Balance: " << balance << endl;
    }
};

int main() {
    // Test constructor exception
    try {
        BankAccount* acc1 = new BankAccount("Abdullah", -100);
        delete acc1;
    }
    catch (const exception& e) {
        cout << "Exception caught in main: " << e.what() << endl;
    }

    // Test withdraw exception
    BankAccount* acc2 = nullptr;
    try {
        acc2 = new BankAccount("Hamza", 500);
        acc2->withdraw(800);
    }
    catch (const exception& e) {
        cout << "Exception caught in main: " << e.what() << endl;
    }

    delete acc2;

    return 0;
}
