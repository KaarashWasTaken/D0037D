#include <iostream>
using namespace std;

int main(void)
{
	
	char c;


	printf("Enter a letter to use for a half pyramid: ");
	scanf_s("%c", &c, 1);

	if (islower(c)) {

		c = c - 32;

	}

	int a = (int)c;

	for (int b = 65; b <= a; b++) {
		for (int c = 65; c <= b; c++) {
			printf("%c", (char)a);
		}
		printf("\n");
	}


	int n;
	int i;
	int i2;
	printf("Enter how many numbers to use for a half pyramid: ");
	scanf_s("%i", &n);
	
	
	for (i = 1; i <= n; i++) {

		for (i2 = 1; i2 <= i; i2++) {

			printf("%i", i2);

		}
		printf("\n");
		
	}
	
	


	


	


	
	




}