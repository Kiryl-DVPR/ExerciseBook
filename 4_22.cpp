#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int row = 10;
    int column;

    while ( row >=1 )
    {
        column = 1;

        while ( column <= 10 )
        {
            cout << ( row % 2 ? "<" : ">");
            column++;
        }

        row--;
        cout << endl;
    }
}