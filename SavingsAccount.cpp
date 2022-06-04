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

    //debit transfers are a convenient version of withrdawing using 3rd party infrastructure...
    long double SavingsAccount::Withdraw(std::string name, long double amount, bool thirdParty) {
    std::string names =  std::string(accounts[name].owner);
    accounts[name].balance -= amount;
    long double balance = accounts[name].balance;
    if(accounts[name].remaining_debit_tx != 0){
        accounts[name].remaining_debit_tx--;
    } else if (accounts[name].users_addons.debit_txs != 0) {
        accounts[name].users_addons.debit_txs--;
    } else {
        balance -= 1.50; //raw debit fee.
        cout << "your out of debit transfers" << endl;
    }
    cout << "Savings account transfer." << endl;
    return balance;
    }

    // helper function to check number of debit transfers remaining
    unsigned int SavingsAccount::check_debit_txs(std::string name){
        cout << "number of tx left: " << accounts[name].remaining_debit_tx << endl;
        return accounts[name].remaining_debit_tx;
    }
    

