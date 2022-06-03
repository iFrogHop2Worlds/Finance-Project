#ifndef SavingsAccount_HPP
#define SavingsAccount_HPP
#include <vector>
#include "AccountBase.hpp"
 
 
class SavingsAccount: virtual public AccountBase {
    private:
        unsigned int free_debit_tx = 15; // when we use debit minus 1.
    public:
        long double DebitTransfer(string, long double); // oerrides the base class implementation
        long double anualReturn(long double sum, double interestRate = 0.03); // default rate is 0.03
        unsigned int check_debit_txs();
        SavingsAccount();
        ~SavingsAccount();
    
};

 #endif