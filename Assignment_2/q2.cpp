#include <iostream>
using namespace std;

int main() {
    const int SECRET1 = 4;
    const int SECRET2 = 1;

    int guess1, guess2;
    cout << "Enter your first guess: ";
    cin >> guess1;
    cout << "Enter your second guess: ";
    cin >> guess2;
    
    int return_num_0, return_num_1;
    
    if (guess1 == SECRET1 && guess2 == SECRET2)
    {
        cout << "Both digits correct, well done!" << endl;
    }
    else if (guess1 == SECRET1 || guess2 == SECRET2) 
    {
        cout << "1 digit correct in the correct place, 0 correct in the wrong place.";
    } 
    else if (guess1 == SECRET2 && guess2 == SECRET1) 
    {
        cout << "0 digits correct in the correct place, 2 correct in the wrong place.";
    }
    else if (guess1 == SECRET2 || guess2 == SECRET1)
    {
        cout << "0 digits correct in the correct place, 1 correct in the wrong place.";
    }
    else
    {
        cout << "0 digits correct, 0 correct in the wrong place.";
    }

    return 0;
}

/*

Enter your first guess: 4
Enter your second guess: 1
Both digits correct, well done!

Enter your first guess: 4
Enter your second guess: 2
1 correct digit in the correct place, 0 correct digits in the incorrect place.

Enter your first guess: 1
Enter your second guess: 4
0 correct digits in the correct place, 2 correct digits in the incorrect place.

Enter your first guess: 3
Enter your second guess: 4
0 correct digits in the correct place, 1 correct digit in the incorrect place.

Enter your first guess: 5 
Enter your second guess: 8
0 correct digits in the correct place, 0 correct digits in the incorrect place.

*/
