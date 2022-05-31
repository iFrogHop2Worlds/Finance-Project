#ifndef Bank_H
#define Bank_H
#include <vector>
#include <string>
#include <unordered_map>

class Bank {
    private:

    public :
        uint16_t branch_id;
        std::vector<std::string> branchMemebrs;
        Bank();
        ~Bank();
};

#endif

