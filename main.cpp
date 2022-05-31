#include <iostream>
#include "AccountBase.cpp"
#include "SavingsAccount.cpp"

int main () {

    AccountBase Acc;
    Acc.openAccount();
    //Acc.closeAccount("BillyBest");
    Acc.deposit("BillyBest", 12.11);
    Acc.deposit("BillyBest", 12.11);
    Acc.deposit("BillyBest", 12.11);
    Acc.withdrawl("BillyBest", 10.55);
    Acc.openAccount();
    std::cout << "test done" << std::endl;
    Acc.deposit("GrizzlyWest", 12.11);
    Acc.deposit("GrizzlyWest", 12.11);
    Acc.checkBalance("BillyBest");
    Acc.checkBalance("GrizzlyWest");

    SavingsAccount SAcc;
    SAcc.openAccount();
    SAcc.deposit("illBill", 1200);
    SAcc.anualReturn(SAcc.checkBalance("illBill"), 0.05);
    SAcc.anualReturn(SAcc.checkBalance("illBill")); // default anual return 0.03
    SAcc.deposit("illBill", 1200);
    SAcc.checkBalance("illBill");
    return 0;
}