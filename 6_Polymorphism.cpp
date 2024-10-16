#include <iostream>
using namespace std;

class Person
{
public:
    int id, salary;
    string name, deg;

    virtual void accept() = 0;
    virtual void display() = 0;
};

class Doctor : public Person
{
public:
    void accept();
    void display();
};

class Astaff : public Person
{
public:
    void accept();
    void display();
};

class Nurse : public Person
{
public:
    void accept();
    void display();
};

void Doctor::accept()
{
    cout << "\nEnter name , id , designation , salary: ";
    cin >> name >> id >> deg >> salary;
}

void Doctor::display()
{
    cout << "\n" << id << "\t" << name << "\t" << deg << "\t" << salary;
}

void Astaff::accept()
{
    cout << "\nEnter name , id , designation , salary : ";
    cin >> name >> id >> deg >> salary;
}

void Astaff::display()
{
    cout << "\n" << id << "\t" << name << "\t" << deg << "\t" << salary;
}

void Nurse::accept()
{
    cout << "\nEnter name , id , designation , salary:  ";
    cin >> name >> id >> deg >> salary;
}

void Nurse::display()
{
    cout << "\n" << id << "\t" << name << "\t" << deg << "\t" << salary;
}

int main()
{
    Doctor d;
    Astaff a;
    Nurse n;
    d.accept();
    a.accept();
    n.accept();
    cout <<"\nID\tName\tDesignation\tSalary\n";
    d.display();
    a.display();
    n.display();
    return 0;
}
