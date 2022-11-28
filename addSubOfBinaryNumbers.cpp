#include <iostream>
using std::cout;
using std::cin;
using std::string;

void menu(int &x, int &y);
void add();
void sub();
void userInput(int &x, string msg);
void binToInt(int &x);
void intToBin(int &x);

int main()
{

    // int x, y;
    // menu(x, y);
}

void binToInt(int &x)
{
    int i = x, count = 1;
    x = 0;
    for(; i > 0; i /= 10)
    {
        int rem = i % 10;
        if(rem == 1)
            x += count;
        count *= 2;
    }
}

void intToBin(int &x)
{
    
}


void userInput(int &x, string msg)
{
    do
    {
        cout << "Enter " << msg << " binary Number: ";
        cin >> x;
        fflush(stdin);
        if((x % 10 != 0))
            cout << "Enter A valid Binary Number:\n";
    } while (x % 10 != 0);
}

void menu(int &x, int &y)
{
    userInput(x, "First");
    userInput(y, "Second");
    cout << "What do you want to perform: ";
    cout << "1) Addition:\n";
    cout << "2) Subtraction:\n";
    binToInt(x);
    binToInt(y);
    cout << "Do you want to change the input Numbers";
}
