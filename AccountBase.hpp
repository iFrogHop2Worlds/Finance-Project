#ifndef ACCOUNTBASE_HPP
#define ACCOUNTBASE_HPP
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>
#include <functional>

using namespace std;

class AccountBase {
     // define addons
    struct Addons {
        int debit_txs = 0;
        int international_wires = 0;
    };
    // defines a core account
    struct Account{
        string owner;
        long double balance = 0;
        Addons users_addons;
        vector<string> txHistory; // change string into a custom txHistory Type?
    }; 
    public:
        unordered_map<string, Account> accounts;

        void openAccount();
        void closeAccount(string);
        // add regular withdraw method(bank machine/tellers/bank app)
        long double DebitTransfer(string, long double); // A withdraw method used by 3rd party services.
        long double deposit(string, long double);
        long double checkBalance(string);
        void selectAddons(); // view and purchase addons
        void removeAddons(); // remove addons and get some refund

        AccountBase(){};
        ~AccountBase(){};
};


#endif