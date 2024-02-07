//
//  Person.cpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#include "Person.hpp"

Person::Person(std::string firstName, std::string lastName, unsigned int age = 18, std::string job = "Engineer")
:fName{firstName}, lName{lastName}, mAge{age}, occupation{job}{}
Person::Person(){};

void Person::setName(std::string fullName)
{
    std::size_t spaceInName = fullName.find(" ");
    if(spaceInName != std::string::npos)
    {
        fName = fullName.substr(0 , spaceInName);
        lName = fullName.substr(spaceInName,std::string::npos);
        
        std::cout<<"hi "<<fName<<lName<<std::endl;
    }
}

std::string Person::getName(void)
{
    return fName + " " + lName;
}

std::string Person::getFirstName(void) {return fName;}
std::string Person::getLastName(void) {return lName;}

void Person::setAge(unsigned int age)
{
    mAge = age;
}

unsigned int Person::getAge(void)
{
    return mAge;
}

void Person::setOccupation(std::string job)
{
    occupation = job;
}

std::string Person::getOccupation(void)
{
    return occupation;
}
