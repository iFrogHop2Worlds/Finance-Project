#include <iostream>
#include "AccountBase.cpp"
#include "SavingsAccount.cpp"
#include "Bank.cpp"
int main () {

    // AccountBase Acc;
    // Acc.openAccount();
    // //Acc.closeAccount("BillyBest");
    // Acc.deposit("BillyBest", 12.11);
    // Acc.deposit("BillyBest", 12.11);
    // Acc.deposit("BillyBest", 12.11);
    // Acc.DebitTransfer("BillyBest", 10.55);
    // Acc.openAccount();
    // std::cout << "test done" << std::endl;
    // Acc.deposit("GrizzlyWest", 12.11);
    // Acc.deposit("GrizzlyWest", 12.11);
    // Acc.checkBalance("BillyBest");
    // Acc.checkBalance("GrizzlyWest");

    SavingsAccount SAcc;
    Bank instance1;
    instance1.openAccount();
    instance1.deposit("illBill", 1200);
    // SAcc.anualReturn(SAcc.checkBalance("illBill"), 0.05);
    // SAcc.anualReturn(SAcc.checkBalance("illBill")); // default anual return 0.03
    instance1.checkBalance("illBill");
    instance1.DebitTransfer("illBill", 46.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.DebitTransfer("illBill", 1.70);
    instance1.AccountBase::DebitTransfer("illBill", 21);
    instance1.deposit("illBill", 67.70);
    instance1.checkBalance("illBill");
    instance1.check_debit_txs();
    return 0;
}