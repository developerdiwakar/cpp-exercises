/**
 * Floyd’s Triangle Alphabet Pattern 5
 * F
 * EF
 * DEF
 * CDEF
 * BCDEF
 * ABCDEF
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
		for (int j = i+1; j <= input+1; ++j)
		{
			cout << (char) (j-1);
		}
		cout << endl;
	}

	return 0;
}
