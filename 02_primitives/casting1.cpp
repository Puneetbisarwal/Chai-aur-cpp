#include <iostream>

using namespace std;

int main(){

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;
    int roundedTeaPrice1 = (short) teaPrice;

    int teaQuantity = 2;
    int totalPrice = teaPrice * teaQuantity;
    double totalPrice1 = teaPrice * teaQuantity;

    cout << " Rounded Tea Price = " << roundedTeaPrice << endl ;
    cout << " Rounded Tea Price 1 = " << roundedTeaPrice1 << endl ;

    cout << " Total Price = " << totalPrice << endl ;
    cout << " Total Price 1 = " << totalPrice1 << endl ;

    return 0;
}
