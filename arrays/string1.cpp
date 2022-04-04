#include<iostream>

using namespace std;

int main(){

	char str[100];
	string text_string;

	// Code to store single word upto 100 characters
	/*cout << "Enter a Word: ";
	cin >> str;
	cout << "You have entered: " << str << endl;*/

	// Code to store multiple words upto 100 characters
	/*cout << "Enter a line: ";
	cin.get(str, 100);
	cout << "You have entered: " << str << endl;*/

	// Code to store string using String data type
	cout << "Enter a string: ";
	getline(cin, text_string);
	cout << "You have entered: " << text_string << endl;

	return 0;
}