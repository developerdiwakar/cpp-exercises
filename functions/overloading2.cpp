// Overloading Using Different Number of Parameters

#include <iostream>

using namespace std;

// Function with int type parameter
void display(int n){
	cout << "Integer Number: "<< n << endl;
}

// Function with float type parameter
void display(float n){
	cout << "Float Number: "<< n << endl;
}

// Function with 2 Params int and float
void display(int n, float f){
	cout << "Integer Number, 1st Params: " << n << "\t";
	cout << "Float Number, 2nd Params: " << f << endl;
}

int main(){
	int n1 = 4;
	float f2 = 4.89;
	// Called display with Integer type argument
	display(n1);
	// Called display with Float type argument
	display(f2);
	// Called display with Integer and Float type arguments
	display(n1, f2);

	return 0;
}