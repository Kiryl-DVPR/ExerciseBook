#include <iostream>
using namespace std;

int main()
{
    int product=5;
    int x=5;

    product=product*x++ ;

    cout << product << endl << x << endl;

    int quotient=5;
    int y=5;
    quotient/=++y;

    cout << quotient << endl << y;
}