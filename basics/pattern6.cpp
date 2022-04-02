/**
 * Floyd’s Triangle Alphabet Pattern 6
 * 
 * FEDCBA
 * EDCBA
 * DCBA
 * CBA
 * BA
 * A
 * 
 */

#include<iostream>

using namespace std;

int main()
{
	char input, start='A';

	cout << "Enter the Alphabet that you want to print at last: ";
	cin >> input;


	for (int i = input; i >= start; --i)
	{
		for (int j = i; j >= start; --j)
		{
			cout << char (j);
		}
		cout << endl;
	}

	return 0;
}
