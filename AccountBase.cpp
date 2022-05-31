#include "AccountBase.h"

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
    auto check = accounts.find(name);
    std::cout << name << std::endl; //sanity check
}

void AccountBase::closeAccount(std::string name){
    cout << "before" << accounts.size() << endl;
    auto res = accounts.find(name);
    res = accounts.erase(res);
    cout << "after" << accounts.size() << endl;
}

int AccountBase::deposit() {
    return 0;
}

int AccountBase::withdrawl() {
    return 0;
}

int AccountBase::checkBalance() {
    return 0;
}

void AccountBase::selectAddons() {

}

void AccountBase::removeAddons() {

}