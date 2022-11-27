#include <iostream>
using std::cout;
using std::cin;
using std::string;

void menu(int &x, int &y);
void add();
void sub();

int main()
{

    int x, y;
    menu(x, y);


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
}
