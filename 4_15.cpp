#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    float VolumeSales;
    float Income;

    cout << "Enter the weekly sales volume in dollars (or -1 for quit): ";
    cin >> VolumeSales;

    while (VolumeSales!=-1)
    {
        Income=VolumeSales*0.09+200.00;
        cout << "Income: " << setprecision(2) << fixed << "$" <<Income << endl;

        cout << "Enter the weekly sales volume in dollars (or -1 for quit): ";
        cin >> VolumeSales;
    }
    
}