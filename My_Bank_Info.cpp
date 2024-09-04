#include <iostream>
#include <cstring>
using namespace std;

class MyBank
{
private:
    int acc_no;
    double balance;
    string name;

public:
    MyBank() : balance(0.0) {}

    void accept();
    void display() const;
    void deposit();
    void withdraw();
    void checkBalance() const;
};

void MyBank::accept()
{
    cout << "Enter Account holder's name: ";
    cin.ignore();       // to ignore any leftover newline character
    getline(cin, name); // getline is better for names with spaces
    cout << "Enter account number: ";
    cin >> acc_no;
    cout << "Enter initial balance: ";
    cin >> balance;
}

void MyBank::display() const
{
    cout << "Account holder's name: " << name << endl;
    cout << "Account number: " << acc_no << endl;
    cout << "Current balance: " << balance << endl;
}

void MyBank::deposit()
{
    double amt;
    cout << "Enter amount to deposit: ";
    cin >> amt;
    if (amt > 0)
    {
        balance += amt;
        cout << "Amount deposited successfully!\n";
    }
    else
    {
        cout << "Invalid amount!\n";
    }
}

void MyBank::withdraw()
{
    double amt;
    cout << "Enter amount to withdraw: ";
    cin >> amt;
    if (amt > 0)
    {
        if (balance >= amt)
        {
            balance -= amt;
            cout << "Amount withdrawn successfully!\n";
        }
        else
        {
            cout << "Insufficient balance!\n";
        }
    }
    else
    {
        cout << "Invalid amount!\n";
    }
}

void MyBank::checkBalance() const
{
    cout << "Current balance: " << balance << endl;
}

int main()
{
    MyBank bank;
    int choice = 0;

    while (choice != 6)
    {
        cout << "\n1. Accept\n2. Display\n3. Deposit\n4. Withdraw\n5. Check Balance\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bank.accept();
            break;
        case 2:
            bank.display();
            break;
        case 3:
            bank.deposit();
            break;
        case 4:
            bank.withdraw();
            break;
        case 5:
            bank.checkBalance();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
