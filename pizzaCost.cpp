// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022

#include <iomanip>
#include <iostream>

int main() {
    // This function calculates the cost of a pizza
    const float RENT = 1;
    const float LABOR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // Input
    std::cout << "What diameter pizza would you like? (inch): ";
    std::cin >> diameter;

    // Process
    sub_total = RENT + LABOR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // Output
    std::cout << "The final cost is: $" << std::fixed
              << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;

    std::cout << "Done." << std::endl;
}
