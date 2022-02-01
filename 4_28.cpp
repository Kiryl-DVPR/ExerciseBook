#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int a=1;
    int c=1;
    int b=1;

    while(b<=4)
    {   
        a=1;
        c=1;

        while (a<=8)
        {
            cout << "* ";
            ++a;
        }

        cout << endl;
        cout << " ";

        while (c<=8)
        {
            cout << "* ";
            ++c;
        }
        cout << endl;
        ++b;
    }
    

}