// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program add numbers

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    float number1;
    float number2;
    float result;

    std::cout << "Type two numbers to add:" << std::endl;

    std::cin >> number1;
    std::cin >> number2;

    result = number1 + number2;

    std::cout << std::endl;
    std::cout << number1 << " + " << number2 << " = " << result << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
