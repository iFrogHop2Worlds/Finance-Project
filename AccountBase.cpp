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

long double AccountBase::DebitTransfer(std::string name, long double amount) {
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


void AccountBase::selectAddons() {

}

void AccountBase::removeAddons() {

}