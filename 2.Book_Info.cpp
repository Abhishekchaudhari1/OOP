
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int f = 0, f1 = 0, n=0,n1;
class Books
{
    int price, stock;
    char *title, *author, *publish;

public:
    Books()
    {
        title = new char;
        author = new char;
        publish = new char;
    }

    void accept();
    void display();
    void search();

} B[50];

// To accept the book info

void Books::accept()
{
    cout << "Enter the title of the book: ";
    cin >> title;
    cout << "Enter the auther of the book: ";
    cin >> author;
    cout << "Enter the publisher of the book: ";
    cin >> publish;
    cout << "Enter the price of the book: ";
    cin >> price;
    cout <<"How many books you want to add ? : ";
    cin >> n1;
    cout << "\nBook added successflly!!\n";
    n++;
    stock+=n1;
}

// To display all the books

void Books::display()
{
    cout << title
         << setw(15) << author
         << setw(20) << publish
         << setw(10) << price
         << setw(10) << stock << endl;
}

// To seach the book and ask for copies

void Books::search()
{
    char *tt, *aut;
    tt = new char;
    cout << "Enter the title of book to search: ";
    cin >> tt;

    aut = new char;
    cout << "Enter the auther of book to search: ";
    cin >> aut;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(tt, B[i].title) == 0 && strcmp(aut, B[i].author) == 0)
        {
            int copy,tprice;
            f = 1;
            cout << "Book found...!" << endl;
            cout << "How many copies you want ? " << endl;
            cin >> copy;
            if (copy > stock){
                
            }
            stock -= copy;
            tprice = price * copy; // Total price of books
            cout << "The total price of your books is " << tprice << endl;
        }
    }
    if (f == 0)
    {
        cout << "Book not found" << endl;
    }
}

int main()
{
    int ch;
    while (ch != 4)
    {
        cout << "\n\nMain Menu" << endl;
        cout << "\n1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            B[0].accept();
            break;

        case 2:
            cout << "\nTitle\t\tAuther\t\tPublisher\tPrice\tStock\n";
            for (int i = 0; i < n; i++)
            {
                B[i].display();
            }
            break;

        case 3:
            B[0].search();
            break;

        case 4:
            cout << "Thank you for visiting.\nExiting...\n";

            break;
        default:
            cout << "Invalid choice. Please try again.";
        }
    }
    return 0;
}
