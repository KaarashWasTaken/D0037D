#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "What is your name?: ";
	cin >> name;

	

	int age;
	cout << endl << "How old are you?: ";
	cin >> age;
	

	string gend;
	cout << endl << "What is your gender?: ";
	cin >> gend;
	

	string adr;
	cout << endl << "What is your address?; ";
	cin >> adr;

	string rel;
	cout << endl << "What is your relationship status?: ";
	cin >> rel;

	float hgt;
	cout << endl << "How tall are you?(meters): ";
	cin >> hgt;	
	

	cout << name << endl << age << endl << gend << endl << adr << endl << rel << endl << hgt << " meters" << endl;




}