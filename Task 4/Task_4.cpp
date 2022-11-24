#include <iostream>
using namespace std;

int main()
{
	string name; //Declares the string variable name
	cout << "What is your name?: ";
	cin >> name; //Defines the variable name to the users input


	int age; //Declares the integer variable age
	cout << endl << "How old are you?: ";
	cin >> age; //Defines the variable age to the users input
	

	string gend; //Declares the string variable gend
	cout << endl << "What is your gender?: ";
	cin >> gend; //Defines the variable gend to the users input
	

	string adr; //Declares the string variable adr
	cout << endl << "What is your address?; ";
	cin >> adr; //Defines the variable adr to the users input

	string rel; //Declares the string variable rel
	cout << endl << "What is your relationship status?: ";
	cin >> rel; //Defines the variable rel to the users input

	float hgt; //Declares the float variable hgt
	cout << endl << "How tall are you?(meters): ";
	cin >> hgt;	//Defines the variable hgt to the users input
	

	cout << name << endl << age << endl << gend << endl << adr << endl << rel << endl << hgt << " meters" << endl; //Prints out every variable on their own line




}