#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fileObject;
    fileObject.open("words.txt");

    if(!fileObject.fail()) {
        cout << "Write data to file" << endl;
        cout << "Enter words: ";
        string word1, word2;
        cin >> word1 >> word2;


        fileObject << word1 << endl << word2 << endl;
        cout << "Finished writing." << endl;
        fileObject.close(); // must close file
    } else {
        cout << "Error opening file." << endl;
    }
return 0;
}
