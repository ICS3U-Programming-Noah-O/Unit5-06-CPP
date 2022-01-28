// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 26, 2022
// This program accepts decimals and then rounds them to a
// given number of decimal places

#include <string.h>
#include <iostream>
#include <iomanip>
#include <cmath>


float RoundDecimal(float &decNum, int decPlace) {
    // This function rounds the user number to
    // the specific number of decimal places
    int decInt;
    decNum = decNum * pow(10, decPlace);
    decNum = decNum + 0.5;
    decInt = decNum;
    decNum = decInt;
    decNum = decNum / pow(10, decPlace);
}


int main() {
    // This function asks the user for a number and a  number of decimals

    std::string decimalNumber;
    std::string decimalPlaces;
    float decimalNumberFloat;
    int decimalPlacesInt;
    int finalNum;

    std::cout << "This program can round a number with decimals ";
    std::cout << "to a specific decimal.\n";
    std::cout << " \n";
    std::cout << "Enter a number that has a decimal: ";
    std::cin >> decimalNumber;
    // Make sure that the user input is a number
    try {
        decimalNumberFloat = std::stof(decimalNumber);
        std::cout << "Enter the number of decimal places: ";
        std::cin >> decimalPlaces;
        try {
            decimalPlacesInt = std::stoi(decimalPlaces);
            RoundDecimal(decimalNumberFloat, decimalPlacesInt);
            std::cout << decimalNumberFloat;
        } catch (std::invalid_argument) {
            std::cout << decimalPlaces;
            std::cout << " is not a valid input. The input must be a number.\n";
        }
    } catch (std::invalid_argument) {
        std::cout << decimalNumber;
        std::cout << " is not a valid input. The input must be a number.\n";
    }
}
