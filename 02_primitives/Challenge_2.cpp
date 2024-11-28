/*challenge1.md

Modify Tea Prices Create a program where the user inputs a base price for tea.
Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float basePrice;

    cout << "Enter the base price of tea: ";
    cin >> basePrice;

    // Increase the price by 10% using type casting
    float increasedPrice = basePrice + (basePrice * 0.1);

    // Round the increased price to the nearest integer using explicit casting
    int roundedPrice = (int)(round(increasedPrice));

    cout << "New Price (10% increase): Rs " << increasedPrice << endl;
    cout << "The new rounded price of tea after a 10% increase is: Rs " << roundedPrice << endl;

    return 0;
}
