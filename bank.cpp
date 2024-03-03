#include <iostream>
#include <string>

using namespace std;

const int MAX_TRANSACTIONS = 100;

class Account
{
protected:
    string name;
    double balance;
    string transactionHistory[MAX_TRANSACTIONS];
    int numTransactions;

public:
    Account(string accountName, double initialBalance)
        : name(accountName), balance(initialBalance), numTransactions(0) {
            addTransaction("Account created with initial balance: $" + to_string(initialBalance));
        }

    virtual void deposit(double amount)
    {
        if (amount <= 0)
        {
            throw "Deposit amount must be positive.";
        }
        balance += amount;
        addTransaction("Deposit: +" + to_string(amount));
    }

    virtual void withdraw(double amount)
    {
        if (amount <= 0)
        {
            throw "Withdrawal amount must be positive.";
        }
        if (amount > balance)
        {
            throw "Insufficient funds.";
        }
        balance -= amount;
        addTransaction("Withdrawal: -" + to_string(amount));
    }

    virtual void display()
    {
        cout << "Account: " << name << "\nBalance: $" << balance << endl;
    }

    void displayTransactionHistory() {
        cout << "Transaction History for " << name << ":\n";
        for (int i = 0; i < numTransactions; ++i) {
            cout << transactionHistory[i] << endl;
        }
    }

protected:
    void addTransaction(string transaction) {
        if (numTransactions < MAX_TRANSACTIONS) {
            transactionHistory[numTransactions++] = transaction;
        } else {
            cerr << "Transaction history is full. Unable to add more transactions." << endl;
        }
    }



public:
    virtual void closeAccount()
    {
        balance = 0;
        addTransaction("Account closed successfully.");
    }

};

class SavingsAccount : public Account
{
public:
    SavingsAccount(string accountName, double initialBalance)
        : Account(accountName, initialBalance) {}
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(string accountName, double initialBalance)
        : Account(accountName, initialBalance) {}
};

int main()
{
    string name;
    double initialDeposit;
    int accountType;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter initial deposit: ";
    cin >> initialDeposit;
    cout << "Choose account type:" << endl;
    cout << "1. Savings Account" << endl;
    cout << "2. Current Account" << endl;
    cout << "Enter your choice: ";
    cin >> accountType;

    // Clear input buffer
    cin.ignore();

    try
    {
        Account *account;

        switch (accountType)
        {
        case 1:
            account = new SavingsAccount(name, initialDeposit);
            break;
        case 2:
            account = new CurrentAccount(name, initialDeposit);
            break;
        default:
            throw "Invalid account type.";
        }

        int choice;
        double amount;
        bool accountActive = true;

        do
        {
            cout << endl << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Display Account" << endl;
            cout << "4. Close Account" << endl;
            cout << "5. Display Transaction History" << endl;
            cout << "6. Exit" << endl;
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                account->deposit(amount);
                cout << "Deposit successful." << endl;
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account->withdraw(amount);
                cout << "Withdrawal successful." << endl;
                break;
            case 3:
                account->display();
                break;

            case 4:
                account->closeAccount();
                accountActive = false;
                cout << "Account closed successfully." << endl;
                break;
            case 5:
                account->displayTransactionHistory();
                break;
            case 6:
                break;
            default:
                cout << "Invalid choice." << endl;
            }
        } while (choice != 6 && accountActive);
        delete account;
    }
    catch (const char* msg)
    {
        cerr << "Exception caught: " << msg << endl;
    }

    return 0;
}
