#include <iostream>
using namespace std;

int main()
{
    //Exercise 4.4 a) and 4.5:
    int x=1;
    int sum=0;

    while (x<=9)
    {
        sum=sum+x;
        x=x+1;

        cout << x << endl;
        
    }
    
   cout << "The sum is " << sum;

}