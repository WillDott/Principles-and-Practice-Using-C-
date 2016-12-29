#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

int main()
{
	string previous = " "; // previous word; initialized to “not a word”
	string current; // current word
	cout << "Inputed words to be checked: ";
	while (cin >> current) { // read a stream of words
		if (previous == current) // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}
//5 repeated
