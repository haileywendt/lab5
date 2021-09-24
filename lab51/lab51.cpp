// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, const char* argr[])
{
    //Part 1
    int i = 0;
    int total = 0;

    for (i = 0; i <= 100; i = i + 2) {
        total = total + i;
    }
    cout << "The sum of all even numbers between 2 and 100, inclusive, is " << total << endl;

    int i2 = 0;
    int total2 = 0;
    for (i2 = 1; i2 <= 100; i2++) {
        total2 = total2 + (i2 * i2);
    }
    cout << "The sum of all squares between 1 and 100, inclusive, is " << total2 << endl;

    //Part 2
    int num = 0;
    int largest = 0;
    int smallest = 99999;
    int even = 0;
    int odd = 0;
    bool done = false;
    while (!done) {
        cout << "Enter a number or Q to quit: ";
        cin >> num;
        if (cin.fail()) {
            done = true;
        }
        else {
            if (num > largest) {
                largest = num;
            }
            if (num < smallest) {
                smallest = num;
            }
            if (num % 2 == 0) {
                even++;
            }
            if (num % 2 == 1) {
                odd++;
            }
        }
    }
    cout << "Largest value: " << largest << " ";
    cout << "Smallest value: " << smallest << endl;
    cout << "Even number count: " << even << " ";
    cout << "Odd number count: " << odd << endl;

    //Part 3
    int number = 0;
    int remainder;
    cout << "Please enter a number: ";
    cin >> number;
    while (number > 0) {
        remainder = number % 2;
        number = number / 2;
        cout << remainder << endl;
    }

    //Part 4
    int num = 12345678;
    cout << "Please enter 8-digit card number: ";
    cin >> num;
    int i = 0;
    int sum = 0;
    int sum2 = 0;
    int temp = 0;
    int temp2 = 0;

    for (i = 1; i <= 8; i++) {
        int digit = num % 10;
        num = num / 10;
        if (i % 2 == 1) {
            sum += digit;
        }
        if (i % 2 == 0) {
            temp = (digit * 2);
            for (int x = 1; x <= 2; x++) {
                temp2 = temp % 10;
                temp = temp / 10;
                sum2 += temp2;
            }
        }
    }
    int checksum = sum + sum2;
    if (checksum % 10 == 0) {
        cout << "Card is valid.";
    }
    else {
        cout << "Card is not valid.";
    }
}