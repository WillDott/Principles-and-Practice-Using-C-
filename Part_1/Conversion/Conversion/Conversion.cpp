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

	cout << "Please enter amount to be coverted folled by the first letter of currency to convert from (Pounds, Yen, Euros)";
	cin >> value >> currency;

	//cout << currency << "\n";

	if (currency == 'p')
	{
		cout << char(156) << value << " = " << "$" << (value * 1.25);
	}
	else if (currency == 'y')
	{
		cout << char(190) << value << " = " << "$" << (value * 0.0085);
	}
	else if (currency == 'e')
	{
		cout << value << " euros" << " = " << "$" << (value * 1.05);
	}
	else
	{
		cout << "Currency not known!";
	}

	keep_window_open();
}