#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

int square(int x) //Function to square user number
{
	return x*x;
}



int main() 
{
	int input = 0; //User inputed number
	
	cout << "Please a number to square: "; //Get user number
	cin >> input;

	cout << "The square of " << input << " is " << (square(input)); //Output square of user number

	keep_window_open();
}

