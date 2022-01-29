#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int lenthSquare; //Длина квадрата
    int lenth1=1;//Счётчик1
    int lenth2=1;//Счётчик1
    int z;

    cout << "Enter lenth of saqure: ";
    cin >> lenthSquare;

    while (lenthSquare>=lenth1)
    {
        cout << "*";
        ++lenth1;
    }
    
    while (lenthSquare>=lenth2)
    {   
        
        z=lenthSquare-2;

        cout << "*\n";
        ++lenth2;
    }
    
}