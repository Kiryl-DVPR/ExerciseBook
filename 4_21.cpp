#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int count = 1;

    while ( count <= 10)
    {
        cout << ( (count % 2) ? "****" : "++++++++") << endl; // x = ( (условие) ? выражение : другое_выражение )
        count++;
    }
}
    