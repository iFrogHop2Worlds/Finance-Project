#ifndef CHEQUEING_ACCOUNT_HPP
#define CHEQUEING_ACCOUNT_HPP

class ChequeingAccount: virtual public AccountBase {
    private:
        unsigned int free_debit_tx = 60;
    public:
    // override withdrawl? or use savings withrsrawl? should i move withdrawL??
};

#endif