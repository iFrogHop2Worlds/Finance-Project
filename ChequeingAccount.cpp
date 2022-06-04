#include "ChequeingAccount.hpp"

    ChequeingAccount::ChequeingAccount(){}
    ChequeingAccount::~ChequeingAccount(){}


    void ChequeingAccount::openAccount(){
        struct Account account;
        std::string name;
        std::cout << "Enter your full name" << std::endl;
        std::cin >> name;
        account.owner = name;
        account.account_type = "Chequeing";
        account.remaining_debit_tx = 60;    // need a way to update this monthly.. will likely reset certain values on a new billing cycle.
        time_t account_created_at = time(0);
        account.billClock = gmtime(&account_created_at);  // setting the time the account was created/ A new billing cycle.  
        accounts.emplace(std::make_pair(account.owner, account));
    }
