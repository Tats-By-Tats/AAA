#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Value before being incrementd: " << num1 << "\n";
    num1++;
    cout << "Value after being incrementd: " << num1 << "\n";
    num1--;
    cout << "Value before being decremented: " << num1 << "\n";
    num1--;
    cout << "Value after being decremented: " << num1 << "\n";
}