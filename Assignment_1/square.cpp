/*
 Simon Siena
 Dylan McKechnie
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int side_length;
    
    cout << "Enter side length: ";
    cin >> side_length;

    cout << "The square of " << side_length << " is " << side_length*side_length << endl;
    cout << "& the cube of " << side_length << " is " << side_length*side_length*side_length << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS; 
}

/*
Enter side length: 8
The square of 8 is 64
& the cube of 8 is 512
*/
