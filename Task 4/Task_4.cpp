#include <iostream>
using namespace std;

int main()
{
	string name;
	int age;
	string gend;
	string adr;
	string rel;
	float hgt;


	cout << "What is your name?: ";
	cin >> name;
	cout << endl << "How old are you?: ";
	cin >> age;
	cout << endl << "What is your sex?: ";
	cin >> gend;
	cout << endl << "What is your address?; ";
	cin >> adr;
	cout << endl << "Are you married?: ";
	cin >> rel;
	cout << endl << "How tall are you?(meters): ";
	cin >> hgt;

	cout << name << endl << age << endl << gend << endl << adr << endl << rel << endl << hgt << endl;




}