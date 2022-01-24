#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int counter=1; //Счётчик для счёта до 10
    int number=0; //Текущее введенное число
    int firstArgest=0; //Первое максимальное найденоое число
    int secondArgest=0; //Первое максимальное найденоое число

    cout << "Enter 10 numbers: " << endl; 

    while (counter<=10)
    {
        cout << counter <<" Number: ";
        cin >> number;

            if(secondArgest>=number) //Сравниваем secondArgest с введённым number
                {
                    secondArgest = number;
                }
        
            if (number >= firstArgest)
                {
                    firstArgest = number;
                } 
            else
                {
                    secondArgest = number; //Сохраняем number, который не прошёл условие number >= firstArgest 
                }
       
        counter=counter+1;  

    }

    cout << endl << "1 Maximum number: " << firstArgest << endl;
    cout << endl << "2 Maximum number: " << secondArgest;
    
}