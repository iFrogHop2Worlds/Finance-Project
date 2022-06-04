#ifndef SavingsAccount_HPP
#define SavingsAccount_HPP
#include <vector>
#include "AccountBase.hpp"
 
  
class SavingsAccount: virtual public AccountBase {
    private:
       
    public:
        // override the account creation function. Add initial fee, debit tx, etc?
        void openAccount();
        // override Billing to suit account type ~ ill do this when I finalize the solution in base.
        long double anualReturn(long double sum, double interestRate = 0.03); // default rate is 0.03
        unsigned int check_debit_txs(string);
        SavingsAccount();
        ~SavingsAccount();
    
};

 #endif