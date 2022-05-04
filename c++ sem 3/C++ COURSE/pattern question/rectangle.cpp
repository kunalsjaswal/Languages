#include <iostream>
using namespace std;

void rectangle()
{
    int row, column;
    cout << "enter rows: ";
    cin >> row;
    cout << "enter columns: ";
    cin >> column;
    if (row > column)
    {
        cout << "your vertical rectangle is:- " << endl;
    }
    else
    {
        cout << "your horizontal rectangle is:- " << endl;
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void holl_rec()
{
    int row, column;
    cout << "enter rows: ";
    cin >> row;
    cout << "enter columns: ";
    cin >> column;
    if (row > column)
    {
        cout << "your vertical hollow rectangle is:- " << endl;
    }
    else
    {
        cout << "your horizontal hollow rectangle is:- " << endl;
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || i == row || j == 1 || j == column)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    rectangle();
    cout << endl;
    holl_rec();
}