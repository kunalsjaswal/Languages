#include <iostream>
using namespace std;
void no_pyramid()
{
    int n;
    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    no_pyramid();
}