
// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 10/03/2022
// This program calculates circumference using tau

#include <iostream>

int main() {
    const float TAU = 6.28;
    float radius, circumference;

    // input
    std::cout << "Insert the radius (cm): ";
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << std::endl;
    std::cout << "The circumference is " << circumference << "cm";
}

