#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    cout << "N\t"  << "10*N\t"  << "100*N\t" << "1000*N\n\n";
    
    int number=1;
    int number10;
    int number100;
    int number1000;

    while (number<=5)
    {
        number10=number*10;
        number100=number*100;
        number1000=number*1000;

        cout << number  << "\t" << number10 << "\t" << number100 << "\t" << number1000 << "\n"; 

        number=number+1;

    }
    
}