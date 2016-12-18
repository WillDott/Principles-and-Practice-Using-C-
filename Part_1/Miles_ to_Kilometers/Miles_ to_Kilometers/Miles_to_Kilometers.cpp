#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

//Convert miles to kilometers
int main()
{
	double user_miles = -1; //User entered miles
	double kilometers = -1; //Amount of kilometers after conversion
	
	//User input
	cout << "Please enter amount of miles to convert: ";
	cin >> user_miles;
	
	//Math to convert miles to kilometers
	kilometers = user_miles * 1.609;

	//Output final result to user
	cout << "Nmber of kilometers: " << kilometers;

	keep_window_open();
}