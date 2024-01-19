//
//  main.cpp
//  Bank Management System
//
//  Created by Dakir Thompson on 1/18/24.
//

#include <iostream>
#include <string>
#include <unordered_map>

#include "Bank.hpp"

int main(int argc, const char * argv[]) {
    //("Megumi", "Fushiguro", 18, "Ju Jutsu socercer");
    Bank GlitchDecenBank;
    GlitchDecenBank.CreateAccount(2000);
    
    std::cout << "Hello, World!\n";
    return 0;
}
