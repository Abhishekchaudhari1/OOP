#include <iostream>
using namespace std;

class Television
{
    int model_no, s_size, price;

public:
    friend void operator<<(ostream &dout , Television &tt);
    friend void operator>>(istream &din , Television &tt);
}T;


void operator<<(ostream &dout , Television &tt)
{
    dout <<"Model Number: " << T.model_no;
    dout <<"Screen size : " << T.s_size;
    dout <<"Price : " << T.price;

}

void operator>>(istream &din , Television &tt)
{
    int e;
    cout <<"\nEnter model no.  , screen size , price  of the television: ";
    try {
        if ( T.model_no > 9999 || T.s_size < 12 || T.s_size > 70 || T.price > 100000 || T.price < 0 ){
            throw e;
        } else {
            din>>T.model_no >> T.s_size >> T.price;
        }
    }
    catch(int e){
        cout << "An exception is ocuured!!";
        T.model_no = 0;
        T.price = 0;
        T.s_size = 0;
    }
    cout <<"End";
}

int main(){
    int ch ;
    Television TV;

    while(true){
        cout <<"\nMenu\n1. Enter Television details\n2. Display TV details\n3. Exit\n";
        cout <<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1:
                cin>>TV;
                break;
            case 2:
            cout << TV;
            case 3:
            cout <<"Exiting...";
            break;

        }
    }
    return 0;
}