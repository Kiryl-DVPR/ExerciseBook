#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int number;

    cout << "Enter a five-digit number(or -1 for quit): ";
    cin >> number;

    while (number!=-1)
    {   
        
        if ((number/10000)==number%10) //Сравниваем первую и последнюю цифру числа number
        {
            if ((number/1000)==number%100) //Сравниваем вторую и предпоследнюю цифру числа number
            {
                
            };
            cout << "The number is Polindrom\n";
        }
        else
        {
            cout << "The number isn't Polindrom\n";
        }

        cout << "\nEnter a five-digit number(or -1 for quit): ";
        cin >> number;

    }
    
    
    
}