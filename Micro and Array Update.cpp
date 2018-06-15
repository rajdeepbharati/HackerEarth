#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k;
    for (int i = 1; i <= t; i++) {
        cin >> n >> k;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int min = a[0];
        for (int j = 0; j < n; j++) {
            if (a[j] < min)
                min = a[j];
        }
        if (min >= k)
            cout << 0 << endl;
        else
            cout << (k - min) << endl;
    }
}
