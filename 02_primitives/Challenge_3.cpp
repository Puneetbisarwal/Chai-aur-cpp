#include <iostream>
#include <string>

using namespace std;

int main(){
    string favoriteTea;
    int cups;

    // Input for favourite tea using getline
    cout << "What is your favourite tea ? " ;
    getline(cin, favoriteTea);

    // Input for number of cups using cin
    cout << "How many cups of " << favoriteTea << " would you like to have ? ";
    cin >> cups;

    // Display the fun message
    cout << "Awesome! Enjoy your " << cups << " cups of delicious \"" << favoriteTea << "\" tea!" << endl ;

    return 0;
}
