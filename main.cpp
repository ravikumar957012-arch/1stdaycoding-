#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double opposite, adjacent;

    cout << "Enter opposite side: ";
    cin >> opposite;

    cout << "Enter adjacent side: ";
    cin >> adjacent;

    double angle = atan2(opposite, adjacent) * 180.0 / M_PI;

    cout << "Angle = " << angle << " degrees" << endl;

    return 0;
}
