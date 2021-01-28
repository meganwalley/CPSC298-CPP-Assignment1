/**
 * Megan Walley
 * CPSC 298 - C++ Introduction
 * Assignment 1: The Basics
 * Problem 2: Fire Capacity
 * 01/27/2021
 **/

#include <iostream>

using namespace std;

/**
 * Write a program that determines whether a meeting room is in violation 
 * of fire law regulations regarding the maximum room capacity. The program 
 * will read in the maximum room capacity and the number of people to attend 
 * the meeting. If the number of peopleis less than or equal to the maximum 
 * room capacity, the program announces that it is legal to hold the meeting 
 * and tells how many additional people may legally attend. If the number 
 * of people exceeds the maximum room capacity, the program announces that 
 * the meeting cannot be held as planned due to fire regulations and tells 
 * how many people must be excluded in order to meet the fire regulations.
 **/

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
    // required variables
    int maximumRoomCapacity;
    int numberOfPeopleRequested;
    int excess = 0;

    // no error checking was requested, just getting the two variables needed
    cout << "Please enter the maximum capacity allowed in the room: ";
    cin >> maximumRoomCapacity;
    cout << "Please enter the number of people looking to attend the event: ";
    cin >> numberOfPeopleRequested;    

    // excess < 0 if in violation
    // excess > 0 if extra people can be invited
    // excess == 0 if at capacity.
    excess = maximumRoomCapacity - numberOfPeopleRequested;
    if (excess < 0) {
        excess = -excess;
        cout << "The meeting cannot be held as planned, due to fire regulations. To not be in " << endl 
             << "violation, please exclude " << excess << " people from this event." << endl;
    } else if (excess == 0) {
        cout << "It is legal to hold the meeting, but no additional people can be invited, legally." << endl;
    } else { 
        cout << "It is legal to hold the meeting. In fact, up to " << excess << " additional " << endl
             << "people may attend the meeting legally." << endl;
    }
    return 0;
}
