#include <iostream>
using namespace std;

int main() {
    int a; long l; char ch; float fl; double d;
    scanf("%d %ld %c %f %lf", &a, &l, &ch, &fl, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", a, l, ch, fl, d);
    return 0;
}