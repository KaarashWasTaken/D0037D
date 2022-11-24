#include <iostream>
using namespace std;

int main()
{
	char name[15];
	printf("What is your first name?: ");
	scanf_s("%s", name, 15); //Takes the users input to a maximum of 15 characters and does not inlude anything after the first whitespace

	int age;
	printf("How old are you?: ");
	scanf_s("%i", &age); //Takes the users input and assigns

	char gend[6];
	printf("What is your gender?(female/male/other): ");
	scanf_s("%s", gend, 6); //Takes the users input to a maximum of 6 characters and does not inlude anything after the first whitespace

	char adr[25];
	printf("What is your address?(Street-housenumber); ");
	scanf_s("%s", adr, 25); //Takes the users input to a maximum of 25 characters and does not inlude anything after the first whitespace

	int rel;
	printf("Are you married?(0=Not married/1=Married): ");
	scanf_s("%i", &rel);

	float hgt;
	printf("How tall are you?(meters): ");
	scanf_s("%a", &hgt);

	char rels;
	if (rel == 0) {

		rels = "Not married";

	}

	else if (rel == 1) {

		rels = "Married";

	}
	
	printf("\n%s \n%i years old \n%s \n%s", name , age, gend, adr);
	printf(rels,"\n");
	printf("%f meters", hgt);
	
	return 0;
	




}