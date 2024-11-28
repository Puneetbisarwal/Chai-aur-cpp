/*challenge1.md

Tea Information Display Write a program that declares variables to store the type of tea,
its price per kilogram (float), and its rating (char). Use data types effectively and
print them in a formatted output using escape sequences.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaType;
    float pricePerKg;
    char rating;

    // Get tea information from the user
    cout << "Enter the type of tea: ";
    getline(cin, teaType);

    cout << "Enter the price per kilogram: ";
    cin >> pricePerKg;

    cout << "Enter the rating (A, B, C): ";
    cin >> rating;

    // Print the formatted output
    cout << "\nTea Information:\n";
    cout << "Type of Tea: " << teaType << endl ;
    cout << fixed << "Price per Kilogram: Rs " << pricePerKg << endl ;
    cout << "Rating: " << rating << endl ;

    return 0;
}
