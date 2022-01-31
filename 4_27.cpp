#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int numberBinary;//Двоичное число
    int n=10;
    int c=2;//Счётчик для цикла
    int x;
    int z=1;
    int e=10;
    int sum=0;
    int y=1;
    
    cout << "Enter a binary number: ";
    cin >> numberBinary;

    while (numberBinary/n>1)
    {
        n=n*10;
        ++c;
    }

    cout << endl << c;

    while (z<=c)
    {
        x=numberBinary%(n/e);
        e=e*10;

        y=y*2;
        
        sum=sum+x*y;
        ++z;
        
    }
    
    cout << endl << sum;
    

}