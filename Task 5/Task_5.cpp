#include <iostream>
using namespace std;

int main()
{
	char name[30];
	printf("What is your name?: ");
	scanf_s("%s", name, 30);

	int age;
	printf("How old are you?: ");
	scanf_s("%i", &age);

	char gend[1];
	printf("What is your gender?(f/m): ");
	scanf_s("%s", &gend, 1);

	/*char adr[];
	cout << endl << "What is your address?; ";
	cin >> adr;

	int rel;
	cout << endl << "Are you married?: ";
	cin >> rel;

	float hgt;
	cout << endl << "How tall are you?(meters): ";
	cin >> hgt;*/
	
	printf("%s \n%i \n%s", name , age, gend);
	
	

	




}