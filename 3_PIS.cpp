/*
Assignment 3;
*/
#include <iostream>
#include <cstring>
using namespace std;
class PIS
{

    int dob, pn, ht, wt;
    long int mob;
    char *name, *add, *dln;
    string bg;

public:
    PIS()
    {
        name = new char;
        add = new char;
        dln = new char;
        strcpy(name, " ");
        strcpy(add, " ");
        strcpy(dln, " ");
        mob = 0;
        dob = 0;
        pn = 0;
        ht = 0;
        wt = 0;
        bg = " ";
    }

    void accept();
    void display();

    ~PIS()
    {
        delete name;
        delete add;
        delete dln;
    }
    friend void search();

} P[50];

void PIS::accept()
{
    {
        // cout<<"Enter name, address,mobile no.,blood group,policy no.,driving licensce no.,height,weight";
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> add;
        cout << "Enter mobile no.: ";
        cin >> mob;
        cout << "Enter blood group: ";
        cin >> bg;
        cout << "Enter policy no.: ";
        cin >> pn;
        cout << "Enter driving licensce no.: ";
        cin >> dln;
        cout << "Enter height: ";
        cin >> ht;
        cout << "Enter weight: ";
        cin >> wt;
        // cin>>name>>add>>mob>>bg>>pn>>dln>>ht>>wt;
    }
}

void PIS::display()
{
    {
        cout << name << "\t" << add << "\t" << mob << "\t" << bg << "\t" << pn << "\t" << dln << "\t" << ht << "\t" << wt << "\n";
    }
}

void search()
{
    string a, nm;
    int f = 0, n;
    cout << "Enter your name and address : ";
    cin >> nm >> a;
    for (int i = 0; i < n; i++)
    {
        if (nm == P[i].name && a == P[i].add)
        {
            f = 1;
            cout << "Info found: \n";
            P[i].display();
        }
    }
    if (f == 0)
    {
        cout << "Information not found!";
    }
}

int main()
{
    int ch;
    while (ch != 4)
    {
        cout << "1. Accept information\n2. Display information\n3. Search information\n4. Exit\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            int n;
            cout << "Enter no. of records you want to store: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                P[i].accept();
            }
            break;
        case 2:
            cout << "Name\tAddress\tMobile No.\tBlood Group\tPolicy No.\tDriving licensce No.\tHeight\tWeight\n";
            // cout << name << "\t" << add << "\t" << mob << "\t" << bg << "\t" << pn << "\t" << dln << "\t" << ht << "\t" << wt << "\n";
            for (int i = 0; i < n; i++)
            {
                P[i].display();
            }
            break;
        case 3:
            search();
            break;
        
        case 4:
            cout <<"Exiting...";
            break;
        default:
            cout<<"Enter valid input!";
            break;
        }
    }

    return 0;
}
