#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream fileIn;
    fileIn.open("goose.txt");
    ofstream fileOut;
    fileOut.open("gooseOut.txt");
    string month;
    int days = 0, dailyEnc = 0, totalEnc = 0;
    float avgEnc = 0;

    if (!fileIn.fail() && !fileIn.fail()) {
        fileOut<<setw(10)<<"Month"<<setw(20)<<"Encounters"<<setw(20)<<"Monthly Encounters"<<setw(20)<<"Average Encounters"<<endl;
    }
        while(fileIn >> month >> days) {
            bool encounters = true;
            int monthlyEnc = 0;
            for (int i = 1; i <= days; i++) {
                fileIn >> dailyEnc;
                monthlyEnc += dailyEnc;
                if(monthlyEnc == 0) {
                    encounters = false;
                }
                totalEnc += monthlyEnc;
                avgEnc = float(monthlyEnc)/days;
            }
            fileOut<<setw(10)<<month<<setw(20)<<encounters<<setw(20)<<monthlyEnc<<setw(20)<<fixed<<setprecision(2)<<((float)sum/(float)numDays)<<endl;
        }
        fileOut << totalEnc << endl;
        fileIn.close();
        fileOut.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
