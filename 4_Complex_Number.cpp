#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void getnumber()
    {
        cout << "Enter the real part of no.: ";
        cin >> real;
        cout << "Enter the imaginary part of no.: ";
        cin >> img;
    }
    void display()
    {
        if (img > 0)
        {
            cout << real << " + " << img;
        }
        else
        {
            cout << real << " - " << img;
        }
    }

    Complex operator+(Complex)
    {
        C3.real = C1.real + C2.real;
        C3.img = C1.img + C2.img;
        return C3;
    }

    Complex operator-(Complex)
    {
        C3.real = C1.real - C2.real;
        C3.img = C1.img - C2.img;
        return C3;
    }
    Complex operator*(Complex)
    {
        C3.real = (C1.real * C2.real) + (C1.img * C2.img);
        C3.img = (C1.img + C2.real) + (C1.real * C2.img);
        return C3;
    }
    Complex operator/(Complex)
    {
        C3.real = ((C1.real * C2.real) + (C1.img * C2.img)) / ((C2.real * C2.real) + (C2.img * C2.img));
        C3.img = ((C1.img + C2.real) + (C1.real * C2.img)) / ((C2.real * C2.real) + (C2.img * C2.img));
        return C3;
    }

} C1, C2, C3;

int main()
{

    int ch;
    while (ch != 7)
    {
        cout << "\n1. Accept a complex number\n2. Display a complex number\n3. Add two complex numbers\n4. Subtract two complex numbers\n5. Multiply two complex numbers\n6. Division of two complex numbers\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch(ch)
        {
            case 1:
                C1.accept();
                C2.accept();
                break;
            case 2:
                C1.display();
                C2.display();
                break;
            case 3:            
                C1+c2;
                break;
            case 4:
                C1-C2;
                break;
            case 5:
                C1*C2;
                break;
            case 6:
                C1/C2;
                break;
            case 7:
                cout <<"\nExiting...\n";
                break;
        }
    }
    return 0;
}
