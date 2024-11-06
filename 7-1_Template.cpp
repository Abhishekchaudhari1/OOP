#include <iostream>
#define size 50
using namespace std;

template <class T>
void SelSort(T a[size], int n)
{
    T temp;
    // cout <<"Enter the no. of array elements : ";
    // cin>>n;
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    cout <<"\n";
}

int main()
{
    int ch, n;
    cout << "Enter no. of array elements : ";
    cin >> n;
    int a[10];
    float b[10];
    char c[10];


    while (true)
    {
        cout << "\nMenu\n1. Sort integer array\n2. Sort Float array\n3. Sort character array\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            SelSort(a, n);
            break;
        case 2:
            SelSort(b, n);
            break;
        case 3:
            SelSort(c, n);
            break;
        case 4:
            cout << "Exiting...";
            break;
        }
    }
    return 0;
}
