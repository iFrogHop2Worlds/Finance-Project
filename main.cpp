#include <iostream>
#include "AccountBase.cpp"

int main () {

    AccountBase Acc;
    Acc.openAccount();

    Acc.closeAccount("BillyBest");
    std::cout << "test done" << std::endl;

    return 0;
}