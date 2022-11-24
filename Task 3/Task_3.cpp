#include <iostream>
using namespace std;

int main()
{
	int n; //Declares variable n
	cout << "Insert the desired number of 'Hello, world!' per loop: ";
	cin >> n; //Takes the user input and defines n as that value
	for (int i1 = n; i1 > 0; i1-- ) { //For loop that assigns the variable i1 the same value as n, and repeats the loop as long as i1 is above 0
		cout << "For looped: Hello, world!" << endl;
	}
	cout << endl;
	int i2 = n; //Assigns i2 the same value as n
	while (i2 > 0) { //While loop that loops as long as i2 is above 0
		cout << "While looped: Hello, world!" << endl;
		i2--;
	}
	cout << endl;
	int i3 = n; //Assigns i3 the same value as n
	do { //A do-while loop that execute the code below as long as i3 is above 0
		cout << "do-while looped: Hello, world!" << endl;
		i3--;
	}
	while (i3 > 0);
}