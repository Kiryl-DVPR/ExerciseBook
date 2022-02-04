#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int z=2023;
    long long c=7920000000;
    long long sum;

    cout << "Year\t" << "Number of population per year\t" << "Increment by the end of the year\n\n";

    while(z<=2098)
    {
        cout << z;
        c=c*1.011;
        sum=c*0.011;
        cout<< "     " <<"\t" << c << "\t" << "                 "<< sum << endl;

        ++z;   
    }
}