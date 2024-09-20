#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fileObject;
    int num = 0, sum = 0;
    float avg = 0;
    fileObject.open("numbers.txt");
    if (!fileObject.fail()) {
        for (int i = 1; i <= 5; i++) {
            fileObject >> num;
            sum += num;
        }
        cout << "Avg = " << (sum/5.0) << endl;
        fileObject.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}



