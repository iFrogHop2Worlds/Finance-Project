#include "AccountBase.hpp"

//cosntructors
//AccountBase::AccountBase() {}


// fucntion definitions
void AccountBase::openAccount(){
    struct Account account;
    std::string name;
    std::cout << "Enter your full name" << std::endl;
    std::cin >> name;
    account.owner = name;
    time_t account_created_at = time(0);
    account.billClock = gmtime(&account_created_at);
    accounts.emplace(std::make_pair(account.owner, account));
    //auto check = accounts.find(name);
}

void AccountBase::closeAccount(std::string name){
    cout << "before" << accounts.size() << endl;
    auto res = accounts.find(name);
    res = accounts.erase(res);
    cout << "after" << accounts.size() << endl;
}

long double AccountBase::deposit(std::string name, long double amount) {
    std::string names =  std::string(accounts[name].owner);
    accounts[name].balance += amount;
    long double balance = double(accounts[name].balance);
    return balance;
}


long double AccountBase::Withdraw(std::string name, long double amount) {
    std::string names =  std::string(accounts[name].owner);
    accounts[name].balance -= amount;
    long double balance = accounts[name].balance;
    cout << "regular debit transfer" << endl;
    return balance;
}

long double AccountBase::checkBalance(std::string name) {
    std::string names =  std::string(accounts[name].owner);
    long double balance = accounts[name].balance;
    cout << names << endl;
    cout << "account balance: $" << balance << endl;
    return balance;
}

void AccountBase::accountBilling(){
    // need to make this happen once a day and remove the account bool paid. I dont like that approach.
    for (auto& it: accounts) {
    cout << it.first << "\n";
    time_t account_created_at = time(0);
    auto checkTime = gmtime(&account_created_at); 
    if(it.second.billClock->tm_mday == checkTime->tm_mday && it.second.paid == false){
        Withdraw(it.first, 5.00);
        it.second.paid == true;
        cout << "debited: -$5" << "\n";
        cout << "new billing cycle: " << it.second.billClock->tm_mday << "\n";
    }
}
}

void AccountBase::selectAddons() {

}

void AccountBase::removeAddons() {

}
