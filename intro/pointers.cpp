#include <cstdio>

// Pointer
// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

void update(int *a, int *b) {
    int _a = *a + *b;
    int _b = *a > *b ? *a - *b : *b - *a;
    *a = _a;
    *b = _b;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
