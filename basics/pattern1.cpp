// Program to print half pyramid using alphabets

/**
 * *
A 
A B 
A B C 
A B C D

**/ 


#include <iostream>

using namespace std;


int main()
{
    char input, start = 'A';

    cout << "Enter the Alphabet Between A-Z: ";
    cin >> input;

    for (int i = start; i <= input; i++)
    {   
        for(int j=start; j<=i; j++)
        {
            cout << (char) j << " ";
        }
        cout << "\n";
    }

    return 0;
}
