//
//  Person.hpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#ifndef Person_hpp
#define Person_hpp

#include <string>
#include <iostream>

class Person
{
public://interface
    Person(std::string firstName, std::string lastName, unsigned int age, std::string job);
    
    void setName(std::string fullname);
    std::string getName(void);
    
    void setAge(unsigned int age);
    unsigned int getAge(void);
    
    void setOccupation(std::string job);
    std::string getOccupation(void);
    
private://implementation and data
    std::string fName;
    std::string lName;
    unsigned int mAge;
    std::string occupation;
    
};

#endif /* Person_hpp */
