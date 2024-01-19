//
//  AccountHolder.hpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#ifndef AccountHolder_hpp
#define AccountHolder_hpp

#include <random>
#include "Person.hpp"
class AccountHolder : public Person{
public://interface
    AccountHolder(std::string fn, std::string ln, unsigned int age, std::string job);
    //void setAccountNumber(long accNum);
    long getAccountNumber(void);
    void newAccountNumber();
private://implementation and data
    long AccountNumber;
    std::random_device rd;
    
};

#endif /* AccountHolder_hpp */
