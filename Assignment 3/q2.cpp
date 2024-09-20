//Simon Siena

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void grow_investment(float &initial, float r) {
    initial *= 1 + (r/100);
}

int main() {
    ofstream file_out;
    ifstream file_in;
    string first_name, last_name;
    float current_investment, interest_rate, target_val;

    file_in.open("clients.txt");
    file_out.open("q2_output.txt");
    if (file_in.fail()) {
        cout << "Input file failed to open." << endl;
        return 1;
    }
    if (file_out.fail()) {
        cout << "Output file failed to open." << endl;
        return 1;
    }

    while(file_in >> first_name >> last_name >> current_investment >> interest_rate >> target_val) {
        int years = 0;   
        while (current_investment < target_val) {
            grow_investment(current_investment, interest_rate);
            years += 1;
        }
        file_out << setw(10) << first_name << setw(10) << last_name << setw(10) << years << endl; 
    }
    file_in.close();
    file_out.close();
    return 0;
}

/*
     Count   Dracula        11
    Muffin       Man         8
     Peter       Pan         6
     Tooth     Fairy         9
     Daffy      Duck         6
     Harry    Potter        17
     Homer   Simpson         7
      Bugs     Bunny        11
    Albert  Einstein         5
    Spider       Man         3
      Alan    Turing         9
    Tinker      Bell         7
*/
