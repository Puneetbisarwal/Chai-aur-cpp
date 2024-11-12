#include <iostream>

using namespace std;

int main(){

    int smallTea = 100;
    int smallTea1 = -100;
    unsigned smallTeaPack = -1200;
    unsigned smallTeaPack1 = 1200;

    long largeTeaStorage = 100000000;
    long long largeTeaStorage1 = 100000000;

    short teaSample = 25;

    cout << " Small Tea = " << smallTea << endl ;
    cout << " Small Tea 1 = " << smallTea1 << endl ;

    // Will give any random garbage value
    cout << " Small Tea Pack = " << smallTeaPack << endl ;
    cout << " Small Tea Pack 1 = " << smallTeaPack1 << endl ;

    cout << " Large Tea Storage = " << largeTeaStorage << endl ;
    cout << " Large Tea Storage 1 = " << largeTeaStorage1 << endl ;

    cout << " Tea Sample = " << teaSample << endl ;

    return 0;
}
