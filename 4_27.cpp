#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int numberBinary;//Двоичное число
    int n=10;
    int c=2;//Счётчик для цикла, который определяет количество цифр в двоичном коде
    int mod;//Остаток от деления двоичного кода
    int z=1;//Счётчик для цикла перевода двоичного кода в десятичный
    int sum=0;//Перевод из двоичного кода в десятичный
    int y=1;//Элемент перевода в десятичный код, умножение на цифры двоичного кода начинается с конца двоичного кода и равно 1,2,4,8,16...
    
    cout << "Enter a binary number: ";
    cin >> numberBinary;

    while (numberBinary/n>1)//Для определения количества цифр в двоичном коде
    {
        n=n*10;
        ++c;
    }

    while (z<=c)//Цикл, который должен повториться "c" раз, т.е. количество цифр в двоичеом коде
    {
        mod=numberBinary%10;

        numberBinary=(numberBinary-mod)/10;

        sum=sum+mod*y;

        y=y*2;
        
        ++z;
    }
    
    cout << "Convert to Decimal: " << sum;
    
            
}