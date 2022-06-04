#ifndef Bank_H
#define Bank_H
#include <vector>
#include <string>
#include <unordered_map>
#include "SavingsAccount.hpp"
#include "ChequeingAccount.hpp"
#include "InvestingAccount.hpp"

class Bank: public SavingsAccount, public ChequeingAccount, public InvestingAccount {
    private:

    public :
        uint16_t branch_id;
        std::vector<std::string> branchMemebrs;
        Bank(){};
        ~Bank(){};
};

#endif

