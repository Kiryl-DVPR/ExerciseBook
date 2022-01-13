#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int Distance; //Пройденное растояние в милях
    int Refueling; //Количество бензина в галлонах(дозапрвка)
    double FuelConsumption; //Количество миль/галлон
    double SumFuelConsumption=0; //Суммарное значени расхода
    int SumRefueling=0; //Счётчик для количества дозаправок

    cout << endl << "Enter distance of miles (or 0 to quit): ";
    cin >> Distance;

    while (Distance!=0)
    {
        
        cout  << "Enter the number of gallons of gasoline : ";
        cin >> Refueling;

        FuelConsumption=static_cast<double>(Distance)/Refueling;

        cout  << "Gasoline consumption miles/gallon: " << setprecision(4) << fixed << FuelConsumption <<endl ;

        SumRefueling=SumRefueling+1;
        SumFuelConsumption=(SumFuelConsumption + FuelConsumption)/SumRefueling;

        cout  << "Average fuel consumption miles/gallon: " << setprecision(4) << fixed << SumFuelConsumption <<endl ;

        cout << endl << "Enter distance of miles (or 0 to quit): ";
        cin >> Distance;

    }

}