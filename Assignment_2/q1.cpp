#include <iostream>

using namespace std;

int main() {
    float money;
    cout << "How much money does mike have? ";
    cin >> money; 

    if (money >= 1.75) {
        cout << "Mike can afford a regular coffee, ";
        money -= 1.75;
        if (money >= 1.25) {
            cout << "and a slice of cake.";
            money -= 1.25;
        } else if (money >= 1) {
            cout << "and a donut.";
            money -= 1;
        } else {
            cout << "but no treat.";
        }

    } else if (money >= 1) {
        cout << "Mike can afford a small coffee, ";
        money -= 1;
        if (money >= 0.6) {
            cout << "and a mini tart.";
            money -= 0.6;
        } else if (money >= 0.5) {
            cout << "and a chocolate.";
            money -= 0.5;
        } else {
            cout << "but no treat.";
        }
    } else if (money >= 0.5) {
        cout << "Mike can only afford a chocolate.";
        money -= 0.5;
    } else {
        cout << "Mike cannot afford anything at the C&D";
        return 0;
    }

    cout << endl << "After his trip to the C&D, Mike has $" << money << " remaining." << endl;
    return 0;
}


How much money does mike have? 3.50
Mike can afford a regular coffee, and a slice of cake.
After his trip to the C&D, Mike has $0.5 remaining.
PS C:\Users\simon\Desktop\Code\MTE-121\Assignment_2> .\a.exe
How much money does mike have? 2.75
Mike can afford a regular coffee, and a donut.
After his trip to the C&D, Mike has $0 remaining.
PS C:\Users\simon\Desktop\Code\MTE-121\Assignment_2> .\a.exe
How much money does mike have? 2.00
Mike can afford a regular coffee, but no treat.
After his trip to the C&D, Mike has $0.25 remaining.
PS C:\Users\simon\Desktop\Code\MTE-121\Assignment_2> .\a.exe
How much money does mike have? 1.70
Mike can afford a small coffee, and a mini tart.
After his trip to the C&D, Mike has $0.1 remaining.
PS C:\Users\simon\Desktop\Code\MTE-121\Assignment_2> .\a.exe
How much money does mike have? 1.55
Mike can afford a small coffee, and a chocolate.
After his trip to the C&D, Mike has $0.05 remaining.
PS C:\Users\simon\Desktop\Code\MTE-121\Assignment_2> .\a.exe
How much money does mike have? 1.45
Mike can afford a small coffee, but no treat.
After his trip to the C&D, Mike has $0.45 remaining
