//
//  Bank.hpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#ifndef Bank_hpp
#define Bank_hpp

#include <unordered_map>
#include <stdio.h>

#include "AccountHolder.hpp"
class Bank{
public://Interface
    Bank();
    void CreateAccount(int);
    void Deposit(double dep, short int accNum);
    double withdrawl(double);
    unsigned short int getAccountNumber(void);
private://Inplementation and Data
    //key is account number value is a * to accountHolders object
    std::unordered_map<unsigned short int, AccountHolder*> mCustomers;
    unsigned short int currAccNum;
};

#endif /* Bank_hpp */
