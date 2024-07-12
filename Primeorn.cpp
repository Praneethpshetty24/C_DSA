#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Neither prime nor composite" << endl;
        return 0;
    }

    bool isPrime = true;
    int i = 2; // Start checking from 2

    while (i <= sqrt(n)) {
        if (n % i == 0) {
            isPrime = false;
            break; // No need to check further
        }
        i++;
    }

    if (isPrime) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is a composite number" << endl;
    }

    return 0;
}
