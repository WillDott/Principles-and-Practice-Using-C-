#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

vector<string> blacklist = { "broccoli", "apple", "banana" }; //Vector of blacklisted words

bool isBad(string word) //Check if entered word is in blacklisted dictonary 
{
	for (int i = 0; i < blacklist.size(); i++) //Iterate through the vector
	{
		if (blacklist[i] == word) //If word is blacklisted
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}




int main()
{
	string word;
	while (cin >> word) //Keep taking input until end terminator 
	{
		if (isBad(word))
		{
			cout << "BEEP "; //Print beep if word is blacklisted
		}
		else
		{
			cout << word << " "; //Other wise print word as normal
		}
	}
	
	

	keep_window_open();

}