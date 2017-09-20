#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Int ("%d"): 32 Bit integer
    // Long ("%ld"): 64 bit integer
    // Char ("%c"): Character type
    // Float ("%f"): 32 bit real value
    // Double ("%lf"): 64 bit real value

    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n%ld\n%c\n%f\n%lf", i, l, c, f, d);

    return 0;
}
