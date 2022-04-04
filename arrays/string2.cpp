#include <iostream>

using namespace std;

void display(char *);
void display(string);

int main(void){

	char str[100];
	string str1;

	cout << "Enter a string" << endl;
	cin.get(str, 100, '\n');

	cout << "Enter another string" << endl;
	getline(cin, str1);

	display(str);
	display(str1);

	return 0;
}


void display(char str[]){
	cout << "Entered character array is: " << str << endl;
}

void display(string str1){
	cout << "Entered string text is: " << str1 << endl;
}