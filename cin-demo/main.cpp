#include <iostream>
#include <string.h>
using namespace std;
int main() {
	cout << "Enter your name, age and height" << endl;
	string name;
	int age;
	float height;
	cin >> name >> age >> height;
	cout << name << " is " << age << " years old and has a height of " << height;
	return 0;
}