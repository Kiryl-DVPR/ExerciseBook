#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int x; //Пройденное растояние в милях
    int y; //Количество бензина в галлонах
    double z; //Количество миль/галлон

    while (x!=0)
    {
        cout << endl << "Enter number of miles: ";
        cin >> x;

        cout  << "Enter the number of gallons of gasoline : ";
        cin >> y;

        z=static_cast<double>(x)/static_cast<double>(y);

        cout  << "Gasoline consumption miles/gallon: " << setprecision(4) << fixed <<z ;


    }
}