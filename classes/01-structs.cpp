#include <iostream>
#include <string>
using namespace std;

struct Student {
    int age, standard;
    string first, last;
    
};

int main () {
    Student john;
    int a, s;
    string f, l;
    
    cin >> a >> f >> l >> s;
    
    john.age = a;
    john.standard = s;
    john.first = f;
    john.last = l;
    
    cout << john.age << " " << john.first << " " << john.last << " " << john.standard;
    return 0;
}
