#include "SavingsAccount.hpp"

    // default contructor/ destructor
    SavingsAccount::SavingsAccount(){}
    SavingsAccount::~SavingsAccount(){}

    //projected return on savings
    long double SavingsAccount::anualReturn(long double sum, double interestRate){
        long double profitReturn = sum + (sum * interestRate);
        cout << "Begining of the year: $" << sum << endl;
        cout << "End of the year: $" << profitReturn << endl;
        return profitReturn;
    }

    void SavingsAccount::openAccount(){
        struct Account account;
        std::string name;
        std::cout << "Enter your full name" << std::endl;
        std::cin >> name;
        account.owner = name;
        account.account_type = "Savings";
        account.remaining_debit_tx = 15;    // need a way to update this monthly.. will likely reset certain values on a new billing cycle.
        time_t account_created_at = time(0);
        account.billClock = gmtime(&account_created_at);  // setting the time the account was created/ A new billing cycle.  
        accounts.emplace(std::make_pair(account.owner, account));
        //auto check = accounts.find(name);
    }

    // helper function to check number of debit transfers remaining
    unsigned int SavingsAccount::check_debit_txs(std::string name){
        cout << "number of tx left: " << accounts[name].remaining_debit_tx << endl;
        return accounts[name].remaining_debit_tx;
    }
    

