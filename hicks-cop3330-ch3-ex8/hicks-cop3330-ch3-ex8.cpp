/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Andrew Hicks
 */

#include <iostream>

using namespace std;
int main()
{
    int a;
    cout << "Enter an integer: ";

    cin >> a;

    if (a % 2 == 0)
        cout << "The value " << a << " is an even number.";
    else
        cout << "The value " << a << " is an odd number.";

    return 0;
}

