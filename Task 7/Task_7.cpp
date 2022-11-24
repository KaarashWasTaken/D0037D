#include <iostream>
using namespace std;

int main()
{
	int n;
	int e;
	cout << "Enter a natural number to first count up to and then down from: ";
	cin >> n;

	e = n;
	if (n < 0) { //If the given number is negative the message below will be printed out
		cout << endl << "Error! Invalid inuput: Negative number" << endl;
	}

	while(n >= 0) //First loop makes it count down to 0
	{
		cout << n;
		n--;

	}

	for (n = 1; n <= e; n++) { //The for-loop makes it count up starting with 1

		cout << n;

	}
	return 0;

}