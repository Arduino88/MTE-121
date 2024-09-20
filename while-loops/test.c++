#include <iostream>

using namespace std;

int main() {
    int num;
    bool loop = true;
    while(cin >> num && loop) {
        cout << num;
        if (num == 0) {
            loop = false;
        }
        
    }
}