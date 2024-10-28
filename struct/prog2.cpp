#include<iostream>

using namespace std;

struct Person{
	string name;
	int age;
	int salary;
	char gender[10];
};

Person getData(Person);
void display(Person);

int main(void){

	Person p1;

	display(getData(p1));

    return 0;
}


Person getData(Person p1){
	cout << "Enter Person's Name: ";
	getline(cin, p1.name);

	cout << "Enter Person's Age: ";
	cin >> p1.age;

	cout << "Enter Person's Salary: ";
	cin >> p1.salary;

	cout << "Enter Person's Gender: ";
	cin >> p1.gender;

	return p1;
}

void display(Person p){
	cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
    cout << "Gender: " << p.gender << endl;
}