#include<iostream>
using namespace std;

int diagonalDifference(int arr[][100], int n) {
    int ld = 0, rd = 0;
    for (int i = 0; i < n; i++) {
        ld += arr[i][i];
        rd += arr[i][n - i - 1];
    }
    int result = abs(ld - rd); // Taking absolute difference
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100][100]; // Assuming maximum dimensions

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int result = diagonalDifference(arr, n);
    cout << "Diagonal Difference: " << result << endl;
    return 0;
}
