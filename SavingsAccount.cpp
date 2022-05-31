#include "SavingsAccount.h"


    SavingsAccount::SavingsAccount(){}
    SavingsAccount::~SavingsAccount(){}

    long double SavingsAccount::anualReturn(long double sum, double interestRate = 0.03){
        long double profitReturn = sum + (sum * interestRate);
        cout << "Begining of the year: $" << sum << endl;
        cout << "End of the year: $" << profitReturn << endl;
        return profitReturn;
    }

