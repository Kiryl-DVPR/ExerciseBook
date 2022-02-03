#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int number;
    int c1; /*Первая цифра*/ float a1;/*Зашифрованная первая цифра*/
    int c2; /*Вторая цифра*/ float a2;/*Зашифрованная вторая цифра*/
    int c3; /*Третья цифра*/ float a3;/*Зашифрованная третья цифра*/
    int c4; /*Четвёртая цифра*/ float a4;/*Зашифрованная четвёртая цифра*/

    cout << "Accepted data from the company: ";
    cin >> number;
    
    c1=number/1000;//Находим 1 цифру 
    a1=(static_cast< float >(c1)+7)/10; //Шифруем 1 цифру

    c4=number%10; //Находим 2 цифру
    a4=(static_cast< float >(c4)+7)/10; //Шифруем 2 цифру

    c2=((number-(c1*1000))/100); //Находим 3 цифру
    a2=(static_cast< float >(c2)+7)/10; //Шифруем 3 цифру

    c3=((number-c4)/10)%10; //Находим 4 цифру
    a3=(static_cast< float >(c3)+7)/10; //Шифруем 4 цифру
    

    cout << "Encrypted message: "<< a3 << " " <<a4 << " " << a1 << " "<< a2;   
    
}