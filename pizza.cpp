// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: Oct 2022
// This program calculates circumference of a circle with user input

#include <iomanip>
#include <iostream>

int main() {
    // this function calculates cost of a pizza
    const float HST = 0.13;
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.5;

    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "What diameter pizza would you like? (inch): ";
    std::cin >> diameter;

    // process
    sub_total = RENT + LABOUR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // output
    std::cout << "\nThe final cost is: $" << std::fixed
        << std::setprecision(2) << std::setfill('0') << total << std::endl;

    std::cout << "\nDone." << std::endl;
}
