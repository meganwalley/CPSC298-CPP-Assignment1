/**
 * Megan Walley
 * CPSC 298 - C++ Introduction
 * Assignment 1: The Basics
 * Problem 3: Employee Pay
 * 01/27/2021
 **/

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * An employee is paid at a rate of $16.00per hour for regular hours worked 
 * in a week. Any hours over that are paid at the overtime rate of one and 
 * one-half times that. From the worker’s gross pay, 6% is withheld for 
 * Social Security tax, 14% is withheld for federalincome tax, 5% is 
 * withheld for state income tax, and $10 per week is withheld for medical 
 * insurance. Write a program that will read in the number of hours worked 
 * in a week as input and that will then output the worker’s gross pay, 
 * each withholding amount, and the net take-home pay for the week.
 **/

int main() {
    // static values defined by the problem
    static int HOURLY_RATE = 16;
    static int OVERTIME_HOURS = 40;
    static float SS_TAX = 0.06F;
    static float FI_TAX = 0.14F;
    static float SI_TAX = 0.05F;
    static int MEDICAL = 10;

    // values that will change depend on user input
    float numHoursWorked = 0.0f;
    float grossPay = 0.0f;
    float takeHomePay = 0.0f;

    // get user input
    cout << "Please enter the number of hours worked: ";
    cin >> numHoursWorked;
    cout << endl << fixed
         <<     "============================" << endl;

    // gross pay
    if (numHoursWorked > OVERTIME_HOURS) {
        grossPay += HOURLY_RATE * OVERTIME_HOURS;
        cout << " Normal Pay          $" << setprecision(2) << (HOURLY_RATE * OVERTIME_HOURS) << endl;
        grossPay += HOURLY_RATE * 1.5 * (numHoursWorked - OVERTIME_HOURS);
        cout << " Overtime Pay        $" << setprecision(2) << (HOURLY_RATE * 1.5 * (numHoursWorked - OVERTIME_HOURS)) << endl;
    } else {
        grossPay += HOURLY_RATE * numHoursWorked;
        cout << " Normal Pay          $" << setprecision(2) << (HOURLY_RATE * numHoursWorked) << endl;
    }
    cout <<     "============================" << endl;
    cout <<     " Gross Pay           $" << setprecision(2) << grossPay << endl;
    cout <<     "============================" << endl;
    
    // fees
    cout <<     " Social Security Tax $" << setprecision(2) << grossPay*SS_TAX << endl
         <<     " Federal Income Tax  $" << setprecision(2) << grossPay*FI_TAX << endl
         <<     " State Income Tax    $" << setprecision(2) << grossPay*SI_TAX << endl
         <<     " Medical Insurance   $" << setprecision(2) << MEDICAL << endl;
    
    // actually take out the fees
    takeHomePay = grossPay;
    takeHomePay -= (grossPay*SS_TAX);
    takeHomePay -= (grossPay*FI_TAX);
    takeHomePay -= (grossPay*SI_TAX);
    takeHomePay -= MEDICAL;

    // net pay
    cout <<     "============================" << endl
         <<     " Net Pay             $" << setprecision(2) << takeHomePay << endl;
    cout <<     "============================" << endl;

    return 0;
}
