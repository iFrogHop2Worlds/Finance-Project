#include <iostream>
#include "AccountBase.cpp"
#include "SavingsAccount.cpp"
#include "Bank.cpp"

    // fault in how implementing debit tx's sort of.. I think I will move these into account objects and override
    // the openAccount function for each account class
    // or maybe change how we initiate the classes?

void displaymenu()
{ cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
cout<<" \t\tMENU \t \n ";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
cout<<" 1. Open account\n";
cout<<" 2. Manage account\n";
cout<<" 3. View statistics \n";
cout<<" 4. Exit program \n";
}
int main () {
    // int selection;
    // bool confirm = true;
    // do {
    //     displaymenu();
    //     cout << " Enter your choice 1-4." << endl;  
    //     cin >> selection;
    //     switch(selection) {
    //         case 1: cout<<"open account \n"; break;
    //         case 2: cout<<"Account dashboard \n"; break;
    //         case 3: cout<<"statistics dashboard \n"; break;
    //         case 4: confirm = false; break;
    //         default: cout << "Invalid option, try again. \n"; displaymenu(); break;
    //     }
    // } while(confirm);

     Bank instance1;
    instance1.openAccount();
    instance1.deposit("illBill", 1200);
    instance1.checkBalance("illBill");
    instance1.Withdraw("illBill", 46.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.Withdraw("illBill", 1.70, true);
    instance1.AccountBase::Withdraw("illBill", 1.70);
    instance1.AccountBase::Withdraw("illBill", 1.70);
    instance1.AccountBase::Withdraw("illBill", 1.70);
    instance1.AccountBase::Withdraw("illBill", 1.70);
    instance1.AccountBase::Withdraw("illBill", 21);
    instance1.deposit("illBill", 67.70);
    instance1.checkBalance("illBill");
    instance1.check_debit_txs("illBill");
    instance1.openAccount();
    instance1.deposit("bill", 999);
    instance1.checkBalance("bill");
    instance1.AccountBase::Withdraw("bill", 46.70);
    instance1.AccountBase::Withdraw("bill", 1.70);
    instance1.AccountBase::Withdraw("bill", 1.70);
    instance1.AccountBase::Withdraw("bill", 1.70);
    instance1.AccountBase::Withdraw("bill", 1.70);
    instance1.checkBalance("bill");
    instance1.check_debit_txs("bill"); // change this function i think
    instance1.accountBilling();

//     instance1.check_debit_txs() ;
    return 0;
}

