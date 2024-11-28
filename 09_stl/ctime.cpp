#include <iostream>
#include <ctime>

using namespace std;

int main() {
	// ctime coding output
	time_t now = time(0);
	tm *localTime = localtime(&now);

	cout << "Current local time is = " << (localTime->tm_hour) << ":"
	<< (localTime->tm_min) << ":" << (localTime->tm_sec) << endl ;
	return 0;
}
