#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int input;
    cin >> input;
    
    int array[input];
    for (int i = 0; i < input; i++) {
        cin >> array[i];
    }
    reverse(array, array + input);
    
    for (int i = 0; i < input; i++) {
        cout << array [i] << " ";
    }
    return 0;
}