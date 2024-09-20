/*
 Simon Siena
 Dylan McKechnie
*/

#include <iostream>

using namespace std;

int main()
{
    double val;
    cout << "Enter the desired withdrawal amount: ";
    cin >> val;
    int dollars = int(val);
    val -= dollars;
    int quarters = int(val / 0.25);
    val -= quarters * 0.25;
    int dimes = int(val / 0.1);
    val -= dimes * 0.1;
    int nickels = int(val / 0.05);
    val -= nickels * 0.05;
    cout << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << val * 100 << " pennies." << endl;
    return 0;
}

/*
Enter the desired withdrawal amount: 1.17
1 dollars, 0 quarters, 1 dimes, 1 nickels, and 2 pennies.

Enter the desired withdrawal amount: 5.24
5 dollars, 0 quarters, 2 dimes, 0 nickels, and 4 pennies.
*/