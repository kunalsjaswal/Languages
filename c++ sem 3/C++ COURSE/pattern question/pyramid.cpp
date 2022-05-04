#include <iostream>
using namespace std;

void half_pyramid()
{
    int n;
    cout << "n: ";
    cin >> n;
    cout << "your half pyramid is:- " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pyramid_180()
{
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void full_pramid()
{

    int n;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "*"
                     << "   ";
            }
        }
        cout << endl;
    }
}

int main()
{
    half_pyramid();
    cout << endl;
    pyramid_180();
    cout << endl;
    full_pramid();
}