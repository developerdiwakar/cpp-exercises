// Display Sum and Average of Students Marks

#include <iostream>

using namespace std;

int main(void){
	
	int marks[] = {90,88,78,83,75};
	int sum = 0;
	int avg = 0;
	int length = 0;
	
	/*// Using normal for loop
	length = sizeof(marks)/sizeof(marks[0]);
	for (int i = 0; i < length; ++i)
	{
		sum += marks[i];
	}*/

	// Using range based for loop
	for(const int &n : marks){
		sum += n;
		++length;
	}

	avg = sum/length;

	cout << "Total Marks: " << sum;
	cout << endl << "Avg Marks: " << avg << endl;

	return 0;
}