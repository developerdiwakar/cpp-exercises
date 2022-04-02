// Program to print full pyramid using Alphabets

#include <iostream>

using namespace std;

int main()
{
	char input, start='A';

	cout << "Enter the Alphabet between A-Z of input: ";
	cin >> input;

	for (int i = start; i <= input; ++i)
	{
		for (int j = input; j >= i; --j)
		{
			cout << " ";
		}
		for (int k = start; k <= i; ++k)
		{
			cout << (char) k << " ";
		}
		cout << endl;
	}

	return 0;
}