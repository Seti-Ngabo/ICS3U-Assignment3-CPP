// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program tells you how much you have to pay for a shoe box

#include <iostream>

int main() {
    // this function does the math
    int amount_as_number;
    std::string amount;
    const float DISCOUNT = 10;
    const float HST = 0.50;
    const float COST = 150;
    const float MAX_COST = 1000;
    const float PERCENTAGE_DISCOUNT = 10;
    float discount;
    float sub_total;
    float total;

    // input
    std::cout << "How many shoe boxes would you like to buy ($150 per box): ";
    std::cin >> amount;
    std::cout << "" << std::endl;

    // process and output
    try {
        amount_as_number = std::stoi(amount);
        sub_total = (amount_as_number * COST);
        total = sub_total + (sub_total * HST);
        if (total > MAX_COST) {
            discount = total / PERCENTAGE_DISCOUNT;
            total = total - discount;
            std::cout << "The total is $"
                        << total << " (with tax plus discount)." << std::endl;
        } else {
            std::cout << "The total is $"
                        << total << " (including tax)." << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid input, try again." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
