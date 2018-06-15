#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;
    if ((n % 3 == 0) && (n % 5 == 0)) {
        cout << "AngelHack!" << endl;
    } else if (n % 3 == 0) {
        cout << "Angel" << endl;
    } else if (n % 5 == 0) {
        cout << "Hack" << endl;
    } else {
        cout << n << endl;
    }
    return 0;
}
