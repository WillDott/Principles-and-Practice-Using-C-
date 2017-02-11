#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

int main()
{
	double value = 0.0;
	char currency = '?';

	cout << "Please enter amount to be coverted followed by the first letter of currency to convert from (Pounds, Yen, Euros)";
	cin >> value >> currency;

	//cout << currency << "\n";

	switch (currency)
	{
	case 'p':
		cout << char(156) << value << " = " << "$" << (value * 1.25);
		break;

	case 'y':
		cout << char(190) << value << " = " << "$" << (value * 0.0085);
		break;

	case 'e':
		cout << value << " euros" << " = " << "$" << (value * 1.05);
		break;

	default:
		cout << "Currency not known!";
		break;
	}

	keep_window_open();
}