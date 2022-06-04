#include <iostream>
#include "AccountBase.cpp"
#include "SavingsAccount.cpp"
#include "ChequeingAccount.cpp"
#include "InvestingAccount.cpp"
#include "Bank.cpp"
// note im including cpp. Not linking properly when I use hpp/h. Something to look into.

void displaymenu();
void createAccountMenu();
void manageAccountMenu();

// might need to update accounts object to user objects which holds multiple accounts if  more then one was opened??

int main () {
    Bank instance1;
    int selection;
    bool confirm = true;
    do {
        displaymenu();
        cout << " Enter your choice 1-4." << endl;  
        cin >> selection;
        switch(selection) {
            case 1: {
                createAccountMenu();
                cout << " Enter your choice 1-4." << endl;
                cin >> selection;
                switch(selection){
                    case 1: instance1.SavingsAccount::openAccount(); break;
                    case 2: instance1.ChequeingAccount::openAccount(); break;
                    case 3: instance1.InvestingAccount::openAccount(); break;
                    case 4: break; 
                    default: cout << "Invalid option, try again. \n"; break;
                }
            } break;
            case 2: {
                manageAccountMenu();
                string name;
                string name2;
                long double sum;
                cout << " Enter your choice 1-4." << endl;
                cin >> selection;
                switch(selection){
                    case 1: {
                        cout << "Enter account name \n";
                        cin >> name;
                        cout << "Enter sum";
                        cin >> sum;
                        instance1.deposit(name, sum);
                    } break;
                    case 2: {
                        cout << "Enter account name \n";
                        cin >> name;
                        cout << "Enter sum";
                        cin >> sum;
                        instance1.withdraw(name, sum);
                    }break;
                    case 3: {
                        cout << "Enter your account name \n";
                        cin >> name;
                        cout << "Enter recipients account name \n";
                        cin >> name2;
                        cout << "Enter sum";
                        cin >> sum;
                        instance1.transfer(name, name2, sum);
                    }break;
                    case 4: {
                        cout << "Enter account name \n";
                        cin >> name;
                        instance1.checkBalance(name);
                    } break;
                    case 5: {
                        cout << "Enter account name \n";
                        cin >> name;
                        instance1.accountOverview(name);
                    } break; 
                    case 6: break; 
                    default: cout << "Invalid option, try again. \n"; break;
                }
            } break;
            case 3: {
                instance1.numberOfAccounts(); 
            } break;
            case 4: confirm = false; break;
            default: cout << "Invalid option, try again. \n"; displaymenu(); break;
        }
    } while(confirm);

    
    // instance1.SavingsAccount::openAccount();
    // instance1.InvestingAccount::openAccount();
    // instance1.deposit("illBill", 1200);
    // instance1.checkBalance("illBill");
    // instance1.Withdraw("illBill", 46.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70, true);
    // instance1.Withdraw("illBill", 1.70);
    // instance1.Withdraw("illBill", 1.70);
    // instance1.Withdraw("illBill", 1.70);
    // instance1.Withdraw("illBill", 1.70);
    // instance1.Withdraw("illBill", 21);
    // instance1.deposit("illBill", 67.70);
    // instance1.checkBalance("illBill");
    // instance1.check_debit_txs("illBill");
    // instance1.ChequeingAccount::openAccount();
    // instance1.deposit("bill", 999);
    // instance1.checkBalance("bill");
    // instance1.Withdraw("bill", 46.70);
    // instance1.Withdraw("bill", 1.70);
    // instance1.Withdraw("bill", 1.70);
    // instance1.Withdraw("bill", 1.70);
    // instance1.Withdraw("bill", 1.70);
    // instance1.checkBalance("bill");
    // instance1.check_debit_txs("bill"); // change this function i think
    // instance1.accountBilling();
    return 0;
}

void displaymenu() { 
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout<<" \t\tMENU \t \n ";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout<<" 1. Open account\n";
    cout<<" 2. Manage account\n";
    cout<<" 3. View statistics \n";
    cout<<" 4. Exit program \n";
}

void createAccountMenu() {
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout<<" \t\tChoose account type \t \n ";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout<<" 1. Savings\n";
    cout<<" 2. Chequeing\n";
    cout<<" 3. Investment \n";
    cout<<" 4. return main menu \n";
}

void manageAccountMenu() {
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout<<" \t\tManage accounts \t \n ";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout<<" 1. Deposit\n";
    cout<<" 2. Withdrawl\n";
    cout<<" 3. Transfer\n";
    cout<<" 4. Account balance \n";
    cout<<" 5. Account overview \n";
    cout<<" 6. return main menu \n";
}

