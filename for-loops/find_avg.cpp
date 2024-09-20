#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "How many numbers? ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << "Result is " << sum / n << endl;
    return 0;
}