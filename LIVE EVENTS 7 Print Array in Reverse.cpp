#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = n / 2;
    int b[l + 1];
    for (int i = 0; i <= l; i++)
        b[i] = a[i];
    for (int i = 0; i <= l; i++)
        a[i] = a[n - i - 1];
    for (int i = l; i <= n; i++)
        a[i] = b[n - i - 1];

    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}
