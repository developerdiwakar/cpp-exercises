#include<iostream>

using namespace std;

struct Person{
	string name;
	int age;
	int salary;
	char gender[10];
};


int main(void){

	Person *p, p1;
	p = &p1;

	cout << "Enter Person's Name: ";
	getline(cin, (*p).name);

	cout << "Enter Person's Age: ";
	cin >> (*p).age;

	cout << "Enter Person's Salary: ";
	cin >> (*p).salary;

	cout << "Enter Person's Gender: ";
	cin >> (*p).gender;

	cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p->name << endl;
    cout <<"Age: " << p->age << endl;
    cout << "Salary: " << p->salary << endl;
    cout << "Gender: " << p->gender << endl;

    return 0;
}