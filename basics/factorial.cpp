#include <iostream>

using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "Enter the number that you want to print the factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is :" << factorial(n);
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}