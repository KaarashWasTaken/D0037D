#include <iostream>
using namespace std;

int main()
{
	int n;
	int e;
	cout << "Enter a natural number to first count up to and then down from: ";
	cin >> n;

	e = n;
	if (n < 0) {
		cout << endl << "Error! Invalid inuput: Negative number" << endl;
	}

	while(n >= 0)
	{
		cout << n;
		n--;

	}

	for (n = 1; n <= e; n++) {

		cout << n;

	}
	return 0;

}