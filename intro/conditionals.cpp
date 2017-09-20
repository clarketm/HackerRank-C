#include <iostream>

using namespace std;

// Conditional Statements
// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

int main() {
    int n;

    cin >> n;

    if (n == 1) {
        printf("one");
    } else if (n == 2) {
        printf("two");
    } else if (n == 3) {
        printf("three");
    } else if (n == 4) {
        printf("four");
    } else if (n == 5) {
        printf("five");
    } else if (n == 6) {
        printf("six");
    } else if (n == 7) {
        printf("seven");
    } else if (n == 8) {
        printf("eight");
    } else if (n == 9) {
        printf("nine");
    } else if (n > 9) {
        printf("Greater than 9");
    }

    return 0;
}
