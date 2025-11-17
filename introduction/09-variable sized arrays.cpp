#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int** array = new int*[n];
    int* sizes = new int[n];

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        sizes[i] = k;
        array[i] = new int[k];
        for (int j = 0; j < k; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        int a_i, j;
        cin >> a_i >> j;
        cout << array[a_i][j] << '\n';
    }

    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }

    delete[] array;
    delete[] sizes;

    return 0;
}
