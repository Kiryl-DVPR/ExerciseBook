#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cin >> x;
    cin >> y;

    int i=1;
    int power=1;

    power*=x;
    ++i;

    if (i<=y)
    
       cout << endl << i << "<=" << y;
    
    //Возведение x в степень у. 4_8:
    while (i<=y)  
    {
        power=power*x;
        i=i+1;
    }

    cout << endl << power; 
}