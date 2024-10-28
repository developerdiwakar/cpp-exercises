/**
 * Floyd’s Triangle Alphabet Pattern 6
 * 
 *     1
 *    12
 *   123
 *  1234
 * 12345
 */

#include<iostream>

using namespace std;

int main()
{
	int input;

	cout << "Enter the number that you want to print at last: ";
	cin >> input;


	for (int i = 1; i <= input; ++i)
	{
		for (int k = input; k >= i; --k)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; ++j)
		{
			cout << j;
		}
		cout << endl;
	}

	return 0;
}
