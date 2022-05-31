 #ifndef SavingsAccount_H
 #define SavingsAccount_H
#include "AccountBase.h"


class SavingsAccount: public AccountBase {
    private:

    public:
    double interestRate = 0.53; //default

    long double anualReturn(long double, double);



    SavingsAccount();
    ~SavingsAccount();
    
};

 #endif