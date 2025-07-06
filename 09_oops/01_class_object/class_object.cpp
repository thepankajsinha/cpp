#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    float balance;

public:
    // Constructor
    BankAccount(string name, int accNo, float initialBalance)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << " successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Function to withdraw money
    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully.\n";
        }
        else
        {
            cout << "Invalid or insufficient balance for withdrawal.\n";
        }
    }

    // Function to display account details
    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    // Creating object of BankAccount
    BankAccount myAccount("Rahul Sharma", 12345678, 5000.0);

    myAccount.display();      // Show initial details
    myAccount.deposit(2000);  // Add money
    myAccount.withdraw(1000); // Withdraw money
    myAccount.display();      // Show updated details

}



// Account Holder: Rahul Sharma
// Account Number: 12345678
// Balance: 5000
// Deposited 2000 successfully.
// Withdrawn 1000 successfully.
// Account Holder: Rahul Sharma
// Account Number: 12345678
// Balance: 6000