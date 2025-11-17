#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int large = a;
    if (b > large) large = b;
    if (c > large) large = c;
    if (d > large) large = d;
    return large;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d);
    return 0;
}
