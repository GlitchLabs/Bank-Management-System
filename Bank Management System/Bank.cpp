//
//  Bank.cpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#include "Bank.hpp"
//#include "AccountHolder.hpp"

Bank::Bank(){}

void Bank::CreateAccount(int initDeposit)
{
    std::cout<<"--------------------------------------------------------"<<std::endl;
    std::cout<<"| lets get some information |"<<std::endl;
    std::cout<< "| enter the following |"<<std::endl;
    std::cout<< "| Full name : ";
    std::string fullName{};
    std::getline(std::cin,fullName);
    std::cout<<fullName<<std::endl;
    std::size_t spaceInName = fullName.find(" ");
    std::string fName, lName;
    if(spaceInName != std::string::npos)
    {
        fName = fullName.substr(0 , spaceInName);
        lName = fullName.substr(spaceInName,std::string::npos);
        
        std::cout<<"hi "<<fName<<lName<<std::endl;
    
    }//may need an else for if there is no space in the name or more than 2;
    std::cout<<"| Age : ";
    unsigned int age;
    std::cin >> age;
    std::cout<<"| Job : ";
    std::string job{" "};
    std::getline(std::cin, job,'\n');
    std::getline(std::cin, job,'\n');
    std::cout<<job<<std::endl;
    AccountHolder customer0001 = AccountHolder(fName,lName, age, job);
    mCustomers[customer0001.getAccountNumber()] = &customer0001;
    
}
