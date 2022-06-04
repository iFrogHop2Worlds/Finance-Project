#include "InvestingAccount.hpp"

InvestingAccount::InvestingAccount(){}
InvestingAccount::~InvestingAccount(){}

void InvestingAccount::openAccount(){
    struct Account account;
    std::string name;
    std::cout << "Enter your full name" << std::endl;
    std::cin >> name;
    account.owner = name;
    account.account_type = "Investment";
    time_t account_created_at = time(0);
    account.billClock = gmtime(&account_created_at);  
    accounts.emplace(std::make_pair(account.owner, account));
}