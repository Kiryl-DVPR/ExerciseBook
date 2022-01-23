#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int counter=1; //Счётчик для счёта до 10
    int number=0; //Текущее введенное число
    int argest=0; //Максимальное найденоое число

    cout << "Enter 10 numbers: " << endl; 

    while (counter<=10)
    {
        
        cout << counter <<" Number: ";
        cin >> number;
        
      
        if (number >= argest)
        {
            argest = number;
        }

        counter=counter+1;
        

    }

    cout << endl << "Maximum number: " << argest;
    
}