#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }
//Create a simple form letter
int main()
{	
	string user_name = "???";  //Users name
	string first_name = "???"; //Recipitants name
	int age = -1; //Recipitants age
	string friend_name = "???"; //Mutal friends name
	char friend_gender = 'm'; //Mutal friends gender

	cout << "Please enter your name: ";
	cin >> user_name;
	cout << "Please enter the name and age of the person you wish to write to: ";
	cin >> first_name >> age;
	cout << "Please enter a mutal friends name followed by their gender(m or f): "; 
	cin >> friend_name >> friend_gender;

	//Output
	cout << "\nDear, " << first_name << "\n	How are you? I am fine. I miss you. \n	Have you seen " << friend_name << " lately?\n";
	
	//Gender Checks
	if (friend_gender == 'm')
	{
		cout << "	If you see " << friend_name << " please ask him to call me.";
	}
	if (friend_gender == 'f')
	{
		cout << "	If you see " << friend_name << " please ask her to call me.";
	}
	
	//Output
	cout << "\n	I hear you just had a birthday and you are " << age << " years old.";

	//Different responses for different ages
	if (age < 12)
	{
		cout << "\n	Next year you will be " << age + 1;
	}
	if (age == 17)
	{
		"Next year you will be able to vote.";
	}
	if (age > 70)
	{
		"I hope you are enjoying retirement.";
	}

	cout << "\n	Yours sincerely,\n\n" << user_name;

	keep_window_open();
}