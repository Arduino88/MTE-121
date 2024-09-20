/*
 Simon Siena
 Dylan McKechnie
*/

#include <iostream>

using namespace std;

int main()
{
	int temp;
	cout << "Enter a temperature (degrees Farenheit): ";
	cin >> temp;

	temp -= 32;
	temp *= 5;
	temp /= 9;

	cout << "The temperature is " << temp << " degrees Celsius.";

    return 0;
}

/*
Enter a temperature (degrees Farenheit): 212
The temperature is 100 degrees Celsius.

Enter a temperature (degrees Farenheit): 100
The temperature is 37 degrees Celsius.

Enter a temperature (degrees Farenheit): 32
The temperature is 0 degrees Celsius.

Enter a temperature (degrees Farenheit): -40
The temperature is -40 degrees Celsius.
*/
