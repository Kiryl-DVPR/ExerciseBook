#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int number=1234;
    int firstLvCode;//Первая операция кодировки
    int a=1000;//Счётчик для цикла
    int c;//Целая часть числа

    cout << "Accepted data from the company: " << number << endl;

    while(a>=1)
    {
        c=number/a;//Находим целую часть числа
        firstLvCode=(c+7)/10;//Первая степень кодировки
        number=number-(c*a);//Определяем число за вычетом целой части
        a=a/10;
        cout <<firstLvCode;
    }
    
}