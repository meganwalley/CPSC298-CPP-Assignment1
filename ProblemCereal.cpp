/**
 * Megan Walley
 * CPSC 298 - C++ Introduction
 * Assignment 1: The Basics
 * Problem 1: Cereal
 * 01/27/2021
 **/

#include <iostream>

using namespace std;

/**
 * A metric ton is 35,273.92 ounces. Write a program that will read the 
 * weight(console input)of a package of breakfast cereal in ounces and 
 * output the weight in metric tons as well as the number of boxes needed 
 * to yield one metric ton of cereal.
 **/

int main() {
    // the defined metric ton provided in the problem.
    // it should not change, so it is static
    // how many ounces a metric ton is:
    static float METRIC_TON = 35273.92f;
    // this is an amount in ounces
    float userWeight = 0.0f;
    int numberOfBoxes = 0;
    float weightInMetricTons = 0.0f;

    // no error checking was requested, so I am not error checking.
    cout <<     "Please enter the weight of a package of breakfast cereal, in ounces: ";
    cin >> userWeight;
    // calculate the weight in metric tons, using the user weight and the defined metric ton in ounces
    weightInMetricTons = userWeight/METRIC_TON;
    cout <<     "Weight of the package in metric tons: " << weightInMetricTons << endl;
    
    // check to make sure the weight in metric tons is greater than zero, so that I'm not dividing by zero
    if (weightInMetricTons > 0) {
        // add 0.5 to this, to ensure we're rounding up and not truncating/rounding down, 
        // as we're dealing with boxes, so the value must be a whole number and it must round up
        numberOfBoxes = (int) ((METRIC_TON/weightInMetricTons) + 0.5);
        cout << "Number of boxes needed to equal a whole metric ton: " << numberOfBoxes << endl;
    } else {
        cout << "There is an error calculating the number of boxes needed to equal a whole metric ton!" << endl;
    }

    return 0;
}
