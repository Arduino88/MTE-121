#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        // cout << i;
        if (float(n) / float(i) == n / i) {
            cout << "Not prime" << endl;
            return 0;
        }
    }
    cout << "Prime" << endl;
    return 0;
}