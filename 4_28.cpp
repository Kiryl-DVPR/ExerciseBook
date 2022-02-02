#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int a=1;//Счётчик для первой строки
    int c=1;//Счётчик для второй строки
    int b=1;//Счётчик для двух стрк(1-ой и 2-ой)

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