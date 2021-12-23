#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls");

    cout << "Guest: ";
    cin >> guestUserNum;

    /*
    if (hostUserNum == guestUserNum)
        cout << "Correct!";
    else
        cout << "Failed!!";
        */

    (hostUserNum == guestUserNum) ? cout << "Correct" : cout << "Failed!!";

    system("pause>0");
}

