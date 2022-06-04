#ifndef CHEQUEING_ACCOUNT_HPP
#define CHEQUEING_ACCOUNT_HPP

class ChequeingAccount: virtual public AccountBase {
    private:
    public:
        // override the account creation function. Add initial fee, debit tx, etc?
        void openAccount();
        // override Billing to suit account type ~ ill do this when I finalize the solution in base.


    ChequeingAccount();
    ~ChequeingAccount();
};

#endif