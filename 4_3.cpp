#include <iostream>
using namespace std;

int main()
{
//Exercise 3.4a):
cout << "Exercise 3.4a):" << endl; 
    int z;
    int x=3;
    int y=4;

    z=x+y;
    ++x; // Инкремент X после вычисления
    cout << z;
    cout << endl << x << endl;

//Exercise 3.4b):
cout << "Exercise 3.4b):" << endl;
    int count;
    cout << " Enter count:" << endl;
    cin >> count;

    if(count>10)
        cout << "Count is greater than 10";
    else 
        cout << "Count isn't greater than 10" ;
//Exercise 3.4c):
cout << "Exercise 3.4c):";
    int total=9;
    int subtr;
    int xc=5;
    cout << endl << xc << endl; //Переменная X:
    --xc;
    cout << xc << endl; //Переменная X после декремента:
    subtr=total-xc;
    cout << subtr << endl; //"Переменная X после декремента и вычитания из Total=9:"

//Exercise 3.4d):
cout << "Exercise 3.4d):" << endl;
    int q=3;
    int divisor=9;
    q=q % divisor;
    cout << q;
};