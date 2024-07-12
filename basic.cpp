#include <iostream>
using namespace std;

int main() {
    char n;
    cin >> n;
    
    if (n >= 'A' && n <= 'Z') {
        cout << "Upper case" << endl;
    } else if (n >= 'a' && n <= 'z') {
        cout << "Lower case" << endl;
    } else if (n >= '0' && n <= '9') {
        cout << "Numeric" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
