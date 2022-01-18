#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int WorkHours; //Число рабочих часов
    float HourlyRate; //Почасовая ставка
    float Salary;

    cout << "Enter the number of working hours (or -1 for quit): "; //Введите число рабочих часов
    cin >> WorkHours;

    while ( WorkHours!=-1 )
    {
        if ( WorkHours<=40 )
        {
            Salary=HourlyRate*WorkHours;

            cout << " Salary: " << Salary;
        }
        else 
            Salary=WorkHours-40;
        
    }
    
}