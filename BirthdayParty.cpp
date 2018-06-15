#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, m;
    for (int i = 1; i <= t; i++) {
        cin >> n >> m;
        if (m % n == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
