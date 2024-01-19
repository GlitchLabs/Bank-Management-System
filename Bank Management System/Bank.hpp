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
private://Inplementation and Data
    //key is account number value is a * to accountHolders object
    std::unordered_map<long, AccountHolder*> mCustomers;
};

#endif /* Bank_hpp */
