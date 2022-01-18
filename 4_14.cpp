#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int AccountNumber;
    float BeginingBalance;
    float AmountExpenses;
    float AmountRecive;
    float CreditLimit;
    float NewBalance;

    cout << "Enter Account Number: " ;
    cin >> AccountNumber;

while (AccountNumber!=-1)
{
    
    
    cout << "Enter the Begining Balance: ";
    cin >> BeginingBalance;

    cout << "Enter the Amount Expenses: ";
    cin >> AmountExpenses;

    cout << "Enter the Amount Recive: ";
    cin >> AmountRecive;

    cout << "Enter the Credit Limit: ";
    cin >> CreditLimit;

    NewBalance=BeginingBalance+AmountExpenses-AmountRecive;

    cout << "New balance: " << NewBalance << endl;

    if (NewBalance>CreditLimit)
    {
        cout << "Account Number: " << AccountNumber << endl;
        cout << "The credit limit: " << CreditLimit << endl;
        cout << "Balance: " << NewBalance << endl;
        cout << "Сredit limit exceeded!!!" << endl;
    }

    cout << endl<< "Enter Account Number: " ;
    cin >> AccountNumber;
    
}

}