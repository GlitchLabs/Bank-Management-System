#include <limits>
#include <ctime>
#include <cstdlib>
#include "AccountHolder.hpp"

AccountHolder::AccountHolder(std::string fn, std::string ln, unsigned int age, std::string job):Person{fn,ln,age,job}{
    std::cout<<"Account Created for "<<getName()<<std::endl;
    accountNumber = rd();
}
AccountHolder::AccountHolder(){accountNumber = rd();};

//void AccountHolder::setAccountNumber(long accNum)
//{
//    AccountNumber = accNum;
//}

long AccountHolder::getAccountNumber(void)
{
    return accountNumber;
}

void AccountHolder::newAccountNumber()
{
    //truly random number generation for the account number.
    accountNumber = rd();
    std::cout<< rd()<<" New Account num is "<<accountNumber<<std::endl;
    
    //return rd();
    
}

double AccountHolder::getBalance(){ return balance; }

void AccountHolder::updateBalance(double amount){ balance += amount; }
