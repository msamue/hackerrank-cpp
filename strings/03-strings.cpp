#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    
    cout << a << b << endl;
    
    char tmpA = a[0];
    char tmpB = b[0];
    a[0] = tmpB;
    b[0] = tmpA;
    cout << a << " " << b;
}