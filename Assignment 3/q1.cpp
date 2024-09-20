// Simon Siena

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("taxi.txt");
    fileOut.open("q1_output.txt");

    if (fileIn.fail()) {
        cout << "Error opening file." << endl;
        return 0;
    }
    
    const int FIRST_SPACING = 10, REPEATED_SPACING = 15; 
    bool vip;
    int stops, trip = 1;
    float totalDist = 0, totalCost = 0, cheapestTrip = INT_MAX, longestTrip = INT_MIN;
    fileOut << setw(FIRST_SPACING) << "Trip #" << setw(REPEATED_SPACING) << "VIP" << setw(REPEATED_SPACING)
         << "stops" << setw(REPEATED_SPACING) << "tripDist (km)" << setw(REPEATED_SPACING) << "tripCost ($)"
         << setw(REPEATED_SPACING) << "totalDist (km)" << setw(REPEATED_SPACING) << "totalCost ($)" << endl;

    while(fileIn >> vip >> stops) {
        float tripDist = 0, posX = 0, posY = 0, tripCost = 0;
        for (int i = 1; i <= stops; i++) {
            float stopX, stopY;
            fileIn >> stopX >> stopY;
            tripDist += sqrt(pow((stopX - posX), 2) + pow((stopY - posY), 2));
            posX = stopX;
            posY = stopY;
        }
        tripDist += sqrt(pow(posX, 2) + pow(posY, 2)); // add return trip to distance
        tripCost += 15 * stops;
        tripCost += tripDist * 2.6;
        if (vip) {
            tripCost *= 0.75;
        }

        cheapestTrip = min(cheapestTrip, tripCost);
        longestTrip = max(longestTrip, tripDist);

        totalCost += tripCost;
        totalDist += tripDist;
        if (trip <= 4 || (trip - 4) % 10 == 0) {
            fileOut << fixed << setw(FIRST_SPACING) << trip << setw(REPEATED_SPACING) << vip << setw(REPEATED_SPACING)
                 << stops << setw(REPEATED_SPACING) << setprecision(2) << tripDist << setw(REPEATED_SPACING) << setprecision(2) << tripCost
                 << setw(REPEATED_SPACING) << setprecision(2) << totalDist << setw(REPEATED_SPACING) << setprecision(2) << totalCost << endl; 
        }
        trip++;
    }
    fileIn.close();
    fileOut << endl << "Cumulative distance driven in August: " << fixed << setprecision(2) << totalDist << " km" << endl;
    fileOut << "Cumulative amount collected in August: $" << fixed << setprecision(2) << totalCost << endl;
    fileOut << "Longest trip in August: " << fixed << setprecision(2) << longestTrip << " km" << endl;
    fileOut << "Cheapest trip in August: $" << fixed << setprecision(2) << cheapestTrip << endl;
    fileOut.close();
    return 0;
}

/*
Trip #            VIP          stops  tripDist (km)   tripCost ($) totalDist (km)  totalCost ($)
    1              0              1          20.40          68.04          20.40          68.04
    2              1              2          13.07          47.98          33.47         116.02
    3              0              4          40.72         165.86          74.18         281.88
    4              0              3          25.83         112.16         100.02         394.05
   14              0              4          26.46         128.79         410.38        1636.09
   24              1              2          25.01          71.27         752.64        2900.09
   34              0              3          21.75         101.55        1053.62        4052.71
   44              0              2          19.87          81.66        1307.69        4972.96
   54              0              5          33.90         163.14        1597.49        6030.68
   64              0              2          19.57          80.89        1874.82        7079.54
   74              1              2          13.53          48.88        2142.17        8064.27

Cumulative distance driven in August: 2244.09 km
Cumulative amount collected in August: $8435.45
Longest trip in August: 51.39 km
Cheapest trip in August: $38.95
*/
