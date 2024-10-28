// Program to compute absolute value
// Works for both int and float

#include <iostream>

using namespace std;

// Function with int type parameter
int absolute(int n){
	if (n < 0)
	{
		n = -n;
	}
	return n;
}

// Function with float type parameter
float absolute(float n){
	if (n < 0.0)
	{
		n = -n;
	}
	return n;
}

int main(){
	// Called function with int type params
	cout << "Absolute value of -5 = "<< absolute(-5) << endl;

	// Called function with float type params
	cout << "Absolute value of 5.5 = "<< absolute(5.5f) << endl;
	return 0;
}