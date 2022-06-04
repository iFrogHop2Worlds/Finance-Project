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

long double AccountBase::checkBalance(std::string name) {
    std::string names =  std::string(accounts[name].owner);
    long double balance = accounts[name].balance;
    cout << names << endl;
    cout << "account balance: $" << balance << endl;
    return balance;
}

// general withdrawl
long double AccountBase::withdraw(std::string name, long double amount) {
    std::string names =  std::string(accounts[name].owner);
    accounts[name].balance -= amount;
    long double balance = accounts[name].balance;
    cout << "regular debit transfer" << endl;
    return balance;
}

//debit transfers are a convenient version of withrdawing using 3rd party infrastructure...
long double AccountBase::withdraw(std::string name, long double amount, bool thirdParty) {
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
    return amount;
}

void AccountBase::transfer(std::string name1, std::string name2, long double sum) {
    if(checkBalance(name1) >= sum){
        long double moneyBeingSwapped = withdraw(name1, sum);
        deposit(name2, moneyBeingSwapped);
    } else {
        cout << "Sorry your broke \n";
    }
}

void AccountBase::accountBilling(){
    // need to make this happen once a day and remove the account bool paid. I dont like that approach.
    for (auto& it: accounts) {
        cout << "name: " << it.first << "account type: " << it.second.account_type <<"\n";
        time_t account_created_at = time(0);
        auto checkTime = gmtime(&account_created_at); 
        if(it.second.billClock->tm_mday == checkTime->tm_mday && it.second.paid == false){
            withdraw(it.first, 5.00);
            it.second.paid == true;
            cout << "debited: -$5" << "\n";
            cout << "new billing cycle: " << it.second.billClock->tm_mday << "\n";
        }
    }
}

void AccountBase::accountOverview(string name) {
    cout << "Account name: " << accounts[name].owner << "\n";
    cout << "Account type: " << accounts[name].account_type << "\n";
    cout << "Account balance: " << accounts[name].balance << "\n";
    cout << "number of remaining debit tx's: " << accounts[name].remaining_debit_tx << "\n";
    // cout << "txHistory: " << accounts[name].txHistory << "\n";
}

void AccountBase::numberOfAccounts(){
    cout << "There are #" << accounts.size() << " accounts \n";
}

void AccountBase::selectAddons() {

}

void AccountBase::removeAddons() {

}
