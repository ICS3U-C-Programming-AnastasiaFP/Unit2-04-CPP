#include <iostream>

int main() {
    // Created by: Anastasia Friedenstein Patino
    // Created on: September 30th, 2023
    // This program asks the user for the diameter of the
    // pizza. It then calculates and displays the total cost
    // of the pizza with tax
    // declare variables

    int diameterOfPizza;
    float subtotal;
    float total;
    int diameter;

    // declare constants
    const float costOfLabor = 2.00;
    const float costOfRent = 2.25;

    // get the diameter from the user
    std::cout << "Enter diameter (cm)";
    std::cin >> diameter;

    // calculate subtotal
    float costOfIngredients = 1.5 * diameter;
    subtotal = costOfLabor + costOfRent + costOfIngredients;

    // calculate total
    total = subtotal * 1.13;

    // display total
    std::cout << "\n";
    std::cout << "total = " << total << "$" << std::endl;
}