#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int number;
    int firstLvCode;//Первая операция кодировки
    int a=1000;//Счётчик для цикла
    int c1, a1;//Целая часть числа
    int c2, a2;
    int c3, a3;
    int c4, a4;

    cout << "Accepted data from the company: ";
    cin >> number;
    
    c1=(number/1000);//Находим цифру 1
    a1=(c1+7)/10;

    c4=(number%10);
    a4=(c4+7)/10;

    c2=((number-(c1*1000))/100);
    a2=(c2+7)/10;

    c3=((number-c4)/10)%10;
    a3=(c3+7)/10;
    

    cout << "Encrypted message: "<< a4 <<a3 << a2 << a1;   
    
    
}