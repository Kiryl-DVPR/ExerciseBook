#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int lenthSquare; //Длина квадрата
    int lenth1=1;//Счётчик для верхней стороны
    int lenth2=1;//Счётчик для левой сороны
    int lenth3=1;//Счётчик для нижней стороны
    

    cout << "Enter lenth of saqure: ";
    cin >> lenthSquare;

        while (lenthSquare>=lenth1) //Для вывода верхней стороны квадрата
        {
            cout << "*";
            ++lenth1;
        }

    cout << "\n";

        while ((lenthSquare-1)>lenth2) // Для вывода левой боковой стороны квадрата
        {   
            cout << "*";

            int lenth4=1;

                while ((lenthSquare-1)>lenth4) // Для вывода правой боковой стороны
                {   
                    cout << " ";
                    ++lenth4;
                }

            cout << "*\n";
            
            ++lenth2;
        }

        while (lenthSquare>=lenth3) //Для вывода нижней стороны квадрата
        {   
            cout << "*";
            ++lenth3;
        }
    
}