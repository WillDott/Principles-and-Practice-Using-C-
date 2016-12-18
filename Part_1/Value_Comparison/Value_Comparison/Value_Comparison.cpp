#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

int main()
{

	int val1 = 0;
	int val2 = 0;
	double divided = 0.0;
	double precentage = 0.0;
	
	cout << "Please enter two values: ";
	cin >> val1 >> val2;

	//Sum of the values
	cout << "The sum of the values: " << (val1 + val2) << "\n";

	//Product of the values
	cout << "The product of the values: " << (val1 * val2) << "\n";
	
	//Bigger than and smaller comparisons 
	if (val1 > val2)
	{
		cout << val1 << " is bigger than " << val2;
		cout << "\n";
		cout << val2 << " is smaller than " << val1;
		cout << "\n";

		//Difference of values 
		cout << "The difference of the values: " << (val1 - val2) << "\n";
	}
	else if (val1 < val2)
	{
		cout << val2 << " is bigger than " << val1;
		cout << "\n";
		cout << val1 << " is smaller than " << val2;
		cout << "\n";

		//Difference of values 
		cout << "The difference of the values: " << (val2 - val1) << "\n";
	}
	else
	{
		cout << "Value Error";
	}

	
	

	keep_window_open();
}


