#ifndef ACCOUNTBASE_H
#define ACCOUNTBASE_H
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>
#include <functional>

using namespace std;

class AccountBase {
    private:
       
    public:
        // defines a core account
        struct Account{
            string owner;
            long double balance = 0;
            vector<string> addOns;
            vector<string> txHistory; // change string into a custom txHistory Type
        }; 
        unordered_map<string, Account> accounts;

        void openAccount();
        void closeAccount(std::string);
        virtual long double withdrawl(std::string, long double);
        virtual long double deposit(std::string, long double);
        virtual long double checkBalance(std::string);
        void selectAddons();
        void removeAddons();

        AccountBase(){};
        ~AccountBase(){};
};


#endif