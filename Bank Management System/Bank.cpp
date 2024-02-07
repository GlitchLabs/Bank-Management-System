//
//  Bank.cpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#include "Bank.hpp"
#include <stdexcept>

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
    AccountHolder * customer0001 = new AccountHolder(fName,lName, age, job);
    mCustomers[customer0001->getAccountNumber()] = customer0001;
    std::cout<<"| "<<customer0001->getAccountNumber()<< " |"<<std::endl;
    //do a deposit here after you create a function to get account number if they dont provide
    std::string ans;
    std::cout<<"| Do you know your accont number? ";
    std::getline(std::cin, ans);
    std::cout<<ans;
    if(ans == "yes" || ans == "Yes" || ans == "Y" || ans == "y"){
        std::cout<<"| Great what is it?";
        std::string accNum{};
        std::getline(std::cin,accNum);
        Deposit(initDeposit,std::stoi(accNum) );
    }
    else
        Deposit(initDeposit, getAccountNumber());
}

void Bank::Deposit(double dep, short int accNum){
    std::cout<<"--------------------------------------------------------"<<std::endl;
    std::unordered_map<unsigned short int,AccountHolder*>::iterator it;
    it = mCustomers.find(accNum);
    if(it != mCustomers.end() )
    {
        it->second->updateBalance(dep);
        std::cout<<" Okay "<<it->second->getFirstName()<<" "<<dep<<" was deposited into your account "<<std::endl;
        std::cout<<" The new balance is "<< it->second->getBalance()<<std::endl;
    }
}

unsigned short int Bank::getAccountNumber(void){
    std::cout<<"--------------------------------------------------------"<<std::endl;
    std::string fullName{};
    std::cout<<"| what is your full name? ";
    std::getline(std::cin, fullName);
    //std::cout<<"| "<<fullName<<" |\n";
    auto spaceInName = fullName.find(" ");
    std::string firstName, lastName = {};
    try {
        if (spaceInName != std::string::npos)
        {
            firstName = fullName.substr(0,spaceInName);
            lastName = fullName.substr(spaceInName,std::string::npos);
        } else{
            std::cout<<"| Name not found try again\n | ";
            //throw(spaceInName);
            throw std::invalid_argument("Name did not have a space try again");
        }
    } catch (std::string letter) {
        std::cout<<"Error"<<letter<<std::endl;
        getAccountNumber();
    }
    {
        
    }
    //unsigned short int accountNumber{};
    //AccountHolder foundAccount{};
    //std::unordered_map<unsigned short int, AccountHolder*>::iterator custi;
    std::unordered_map<unsigned short int, AccountHolder*>::const_iterator constCusti;
    for( constCusti = mCustomers.cbegin(); constCusti != mCustomers.cend(); constCusti++){
        if(constCusti->second->getFirstName() == firstName && constCusti->second->getLastName() == lastName){
            currAccNum = constCusti->first;
            std::cout<<"Account number found "<<firstName<<" its "<<currAccNum<<"\n";
            return constCusti->first;
        }
    }
    return 1;
    
}
