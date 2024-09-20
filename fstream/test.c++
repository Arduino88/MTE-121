#include<iostream>
#include<fstream>

using namespace std;

int main() {
ifstream fileObject;
fileObject.open("numbers.txt");
int num = 0, sum = 0;
float avg=0;
if(!fileObject.fail()) {
    for(int i = 1; i <= 8; i++){
        fileObject>>num;
        sum +=num;
    }
    cout << "The average of numbers is: " <<(float(sum)/5) << endl;
    fileObject.close();
} else {
    cout<<"Error opening the file"<<endl;
}
}
