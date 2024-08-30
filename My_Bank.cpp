#include <iostream>
// #include <stdlib>
using namespace std;

class MyBank
{
private:
    int acc_no, amt, balance = 0;
    string name;

public:
    void accept();
    void display();
    // void balance();
    void deposit()
    {
        cout << "Enter amount to deposit: ";
        cin >> amt;
        this->amt += balance;
        cout << "Amount deposited successfully !!\n";
    }
    void withdraw(int amount)
    {
        if (balance < amount)
        {
            cout << "Sufficent balance is not present in your Account!!!!\nEnter sufficient amount: ";
        }
        else
        {
            this->amt -= balance;
        }
    }
};

void MyBank::accept()
{
    cout << "Enter Account holders name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> acc_no;
    cout << "Enter account balance: ";
    cin >> amt;
    cout << "Information added succesfully!!\n";
}
void MyBank::display()
{
    cout << "Account holders name\tAcount number" << endl;
    cout << name <<"\t\t\t"<< acc_no << endl;
}

// void MyBank::balance()
// {
//     cout << "Balance = " << balance;
// }

int main()
{
    MyBank B;
    int ch;
    while (ch != 6)
    {

        cout << "\n1.Accept\n2.Display\n3.Deposit\n4.Withdraw\n5.Check Balance\n6.Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            B.accept();
            break;
        case 2:
            B.display();
            break;
        case 3:
            B.deposit();
            break;
        case 4:
            B.withdraw(200);
            break;
        // case 5:
        //     B.balance();
        //     break;
        case 5:
            cout << "Exiting...";
            break;
        }
    }
    return 0;
}
