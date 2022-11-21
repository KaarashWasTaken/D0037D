#include <iostream>
using namespace std;

int main()
{
	char name[15];
	printf("What is your name?: ");
	scanf_s("%s", name, 15);

	int age;
	printf("How old are you?: ");
	scanf_s("%i", &age);

	char gend[6];
	printf("What is your gender?(female/male/other): ");
	scanf_s("%s", gend, 6);

	char adr[25];
	printf("What is your address?; ");
	scanf_s("%s", adr, 25);

	int rel;
	printf("Are you married?(0=Not married/1=Married): ");
	scanf_s("%i", &rel);

	float hgt;
	printf("How tall are you?(meters): ");
	scanf_s("%a", &hgt);
	
	printf("\n%s \n%i years old \n%s \n%s \n%i \n%f meters", name , age, gend, adr, rel, hgt);
	
	return 0;
	




}