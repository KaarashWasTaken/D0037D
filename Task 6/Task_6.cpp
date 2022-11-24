#include <iostream>
using namespace std;

int main()
{
    int n;
    int c = 1;
    int i;
    int m = 2;
    int prim = 0;
 
    cout << "Enter how many prime numbers to write out: ";
    cin >> n;
    if(n<1){

        cout << "Invalid number";

    }

    else {
        
        while (c <= n) //A while-loop that will continue to loop as long as "c" is below or equal to "n"
        {
            prim = 0;
            for (i = 2; i <= m/2; i++) //For-loop that checks if a number is a prime number if it is not it will increase the number by one and check again
            {
                if (m % i == 0)
                {
                    
                    prim = 1;
                    break;
                }

            }
            if(prim == 0) //If a prime number is found "c" will increase by one
            {
                c++;
                cout << m << endl;
            }
            m++;
        }
    }

    return 0;

}



