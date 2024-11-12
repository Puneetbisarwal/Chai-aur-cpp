#include <iostream>

using namespace std;

int main(){

    int teaCups;
    int teaLeaves = 50;
    int teaLeaves1 = 50.01;

    float waterTemperature = 85.5;
    float waterTemperature1 = 85.588588;

    double priceOfTea = 299.99;
    double priceOfTea1 = 299.9998989898;

    char teaGrade = 'A';
    char teaGrade1 = 'AB';
    char teaGrade2 = 'ABC';

    bool isTeaReady = 'True';
    bool isTeaReady1 = false;
    bool isTeaReady2 = 5;
    bool isTeaReady3 = 0;
    bool isTeaReady4 = 'A';
    //bool isTeaReady5 = '';

    // Will give any random value
    cout << " Tea Cups = " << teaCups << endl ;

    cout << " Tea Leaves = " << teaLeaves << endl ;
    cout << " Tea Leaves = " << teaLeaves1 << endl ;

    cout << " Water Temperature = " << waterTemperature << endl ;
    cout << " Water Temperature 1 = " << waterTemperature1 << endl ;

    cout << " Price of Tea = " << priceOfTea << endl ;
    cout << " Price of Tea = " << priceOfTea1 << endl ;

    cout << " Tea Grade = " << teaGrade << endl ;
    cout << " Tea Grade 1 = " << teaGrade1 << endl ;
    cout << " Tea Grade 2 = " << teaGrade2 << endl ;

    cout << " Is Tea Ready (True/1 or False/0) = " << isTeaReady << endl ;
    cout << " Is Tea Ready 1 (True/1 or False/0) = " << isTeaReady1 << endl ;
    cout << " Is Tea Ready 2 (True/1 or False/0) = " << isTeaReady2 << endl ;
    cout << " Is Tea Ready 3 (True/1 or False/0) = " << isTeaReady3 << endl ;
    cout << " Is Tea Ready 4 (True/1 or False/0) = " << isTeaReady4 << endl ;
    //cout << " Is Tea Ready 5 (True/1 or False/0) = " << isTeaReady5 << endl ;

    return 0;
}
