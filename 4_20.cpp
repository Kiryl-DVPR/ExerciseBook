#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int studentCounter=1; // счётчик студентов
    int passes=0; // число сдавших
    int failures=0; // число провалившихся
    int result; // результат экзамена (1 = сдал, 2=не сдал)

    while (studentCounter<=10)
    {
        cout << studentCounter << "-Enter result (1 = pass, 2 = fail)";
        cin >> result;
            
            while (result!=1 & result!=2)
            {
                cout << studentCounter << "-Enter result (1 = pass, 2 = fail)";
                cin >> result;
            }
         
        
            if (result==1)
            {
                ++passes;
            } 
            else
            {
                ++failures;
            }

        ++studentCounter;
        
    }

    cout << "Passed: " << passes << endl;
    cout << "Failed: " << failures << endl;

    if (passes>8)
    {
        cout << "Bonus to instructor";
    }
    
    
}