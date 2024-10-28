//Program to sort array elements in Ascending Order
#include<iostream>

using namespace std;

// Define Macros
#define MAX 100

int main(void){

	int arr[MAX];
	int n,temp;

	// Take input for total number of elements to read
	cout << "Enter the total number of elements to read: ";
	cin >> n; 
	// Take input of array elements
	cout << "Enter the elements to store in an array: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	// Sorting the array
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// Display array elements after sorting
	for (int i = 0; i < n; ++i)
	{
		cout << "i = " << arr[i] << endl;
	}

}