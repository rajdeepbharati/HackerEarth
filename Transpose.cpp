#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
