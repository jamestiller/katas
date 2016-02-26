//
//  main.cpp
//  01032016
//
//  Created by James Tiller on 2/25/16.
//  Copyright © 2016 James Tiller. All rights reserved.
//

#include <iostream>
#include <string>
#include "Interconvert.hpp"

int main(int argc, const char * argv[]) {
    std::string str = "123";
    int num = 123;
    std::cout << str << " should equal " << num << std::endl;
    std::cout << "Trying interconvert..." << std::endl;
    int result = StringToInt(str);
    std::string result2 = IntToString(num);
    std::cout << "Result: " << result << " == " << 123 << std::endl;
    std::cout << "Result2: " << result2 << " == " << 123 << std::endl;
    return 0;
}
