#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }
//Read name and age
int main()
{
	cout << "Please enter your first name and age\n";
	string first_name = "???"; //String Variable - ??? means dont know name
	double ageMonths = -1; //Double Variabel (Decimal) -1 means dont know age 
	cin >> first_name >> ageMonths;
	ageMonths = ageMonths * 12; //Times inputted age by 12 to get age in months


	cout << "Hello, " << first_name << "(age: " << ageMonths << " months old)\n";
	keep_window_open();
}