#ifndef ACCOUNTBASE_HPP
#define ACCOUNTBASE_HPP
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>
#include <functional>
#include <conio.h>
#include <ctime>

using namespace std;


class AccountBase {
     // define addons
    struct Addons {
        int debit_txs = 0;
        int international_wires = 0;
    };
    // defines a core account
    
    struct Account {
        string owner;
        long double balance = 0;
        unsigned int remaining_debit_tx = 15;
        Addons users_addons;
        vector<string> txHistory; // change string into a custom txHistory Type?
        tm *billClock;
        bool paid =  false;
    }; 
    public:
        unordered_map<string, Account> accounts;
        void openAccount();
        void closeAccount(string);
        void accountBilling(); // check each account if it needs to be billed or not. if so bill the account and reset boolean
        long double Withdraw(string, long double); // generic withrdaw method
        long double deposit(string, long double);
        long double checkBalance(string);
        void selectAddons(); // view and purchase addons
        void removeAddons(); // remove addons and get some refund

        // friend ostream &operator <<(ostream &output , Account &a){
	    //     output<<a.billClock<< "\n";
	    //     return output;
        // };
        AccountBase(){};
        ~AccountBase(){};
};

#endif