#include<iostream>

using namespace std;

struct Person{
	string name;
	int age;
	int salary;
	char gender[10];
};


int main(void){

	Person p1;

	cout << "Enter Person's Name: ";
	getline(cin, p1.name);

	cout << "Enter Person's Age: ";
	cin >> p1.age;

	cout << "Enter Person's Salary: ";
	cin >> p1.salary;

	cout << "Enter Person's Gender: ";
	cin >> p1.gender;

	cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
    cout << "Gender: " << p1.gender << endl;

    return 0;
}