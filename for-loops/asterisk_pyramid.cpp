#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int size;
    cin >> size;
    for(int i = 1; i <= size; i++) {
        string s = "";
        for(int j = 1; j < i; j++) {
            s += "*";
        }
        cout << s << endl;
    }
    return 0;
}