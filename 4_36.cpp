#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int z=2023;
    long long c=7920000000;//Численность населения на 2022 год
    long long sum;//Приращение мирового населения
    long long twoProd;//Год в котором население в два раза больше теперешнего
    int t=1; // Счётчик для выполния условия один раз

    cout << "Year\t" << "Number of population per year\t" << "Increment by the end of the year\n\n";

    while(z<=2098)
    {
        cout << z;
        c=c*1.011;
        sum=c*0.011;
        cout<< "     " <<"\t" << c << "\t" << "                 "<< sum << endl;

            
                 if (c>(7920000000*2) & t<2)
                {
                    twoProd=z;
                    t=t+1;   
                };
        
        ++z;
    }   

    cout << "A year in which the population is twice as large now: " << twoProd;
}