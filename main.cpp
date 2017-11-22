
/** \ Ray Cahill
 *
 * \ Lab 2
 * \ 25/10/1990
 * \ Computer Programming
 *
 */  /** Preprocessor directives */
#include <iostream>

using namespace std;

//main function
int main()
{
    //Variable declarations
    int n, x;
    double fact1, fact2;

    //initialising fact1, fact2 and n
    fact1 = 1;
    fact2 = 1;
    n = 0;

    //while loop criteria for entering value for n
    while (n<=0)
    {
    // display prompting user to enter value for n
    cout << "Enter a value for n, Greater than or equal to zero: " << endl;
    cin >> n;
    }

    for(x=n; x>0; x--)
    {
        fact1 = fact1 * x;
    }
    // displayed to user with results of for loop
    cout<< "For Loop calculator: " << fact1 << endl;

    // while loop
    while(n>0)
    {

     fact2 = fact2 * n;
     n--;
    }
    // displayed to user with the results of the while loop
    cout<< "\nWhile loop Calculator: "<< fact2 << endl;
    return 0;
}
