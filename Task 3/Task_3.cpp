#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Insert the desired number of 'Hello, world!' per loop: ";
	cin >> n;
	for (int i1 = n; i1 > 0; i1-- ) {
		cout << "For looped: Hello, world!" << endl;
	}
	cout << endl;
	int i2 = n;
	while (i2 > 0) {
		cout << "While looped: Hello, world!" << endl;
		i2--;
	}
	cout << endl;
	int i3 = n;
	do {
		cout << "do-while looped: Hello, world!" << endl;
		i3--;
	}
	while (i3 > 0);
}