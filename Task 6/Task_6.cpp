#include <iostream>
using namespace std;

int main()
{
    int n;
    int c = 0;
    int i;
    int m = 2;
    int prim = 0;
 
    cout << "Enter how many prime numbers to write out: ";
    cin >> n;
    if(n<1){

        cout << "Invalid number";

    }

    else {
        
        while (c <= n)
        {
            prim = 0;
            for (i = 2; i <= m/2; i++)
            {
                if (m % i == 0)
                {
                    
                    prim = 1;
                    break;
                }

            }
            if(prim == 0)
            {
                c++;
                cout << m << endl;
            }
            m++;
        }
    }

    return 0;

}



