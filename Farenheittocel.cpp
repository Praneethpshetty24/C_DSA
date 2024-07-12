#include <iostream>
using namespace std;

int main()
{
    int fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    int celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
