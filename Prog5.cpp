#include <iostream>
using namespace std;

int main() {
    int exitTime, entryTime, period;
    float charge;
    cout << "Please enter your Entry Time: ";
    cin >> entryTime;
    cout << "Please enter your Exit Time: ";
    cin >> exitTime;
    period = exitTime - entryTime;
    if (period > 1)
        charge = (period) + 1;
        else
        charge = 2;
        cout << "The charge for your parking is " << charge;
}