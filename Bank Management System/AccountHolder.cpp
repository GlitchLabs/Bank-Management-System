//
//  AccountHolder.cpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#include <limits>
#include <ctime>
#include <cstdlib>
#include "AccountHolder.hpp"

AccountHolder::AccountHolder(std::string fn, std::string ln, unsigned int age, std::string job):Person{fn,ln,age,job}{
    std::cout<<"Account Created for "<<getName()<<std::endl;
    AccountNumber = rd();
}

//void AccountHolder::setAccountNumber(long accNum)
//{
//    AccountNumber = accNum;
//}

long AccountHolder::getAccountNumber(void)
{
    return AccountNumber;
}

void AccountHolder::newAccountNumber()
{
    //truly random number generation for the account number.
    AccountNumber = rd();
    std::cout<< rd()<<" New Account num is "<<AccountNumber<<std::endl;
    
    //return rd();
    
}
