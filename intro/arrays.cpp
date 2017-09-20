#include <iostream>

using namespace std;

// Arrays Introduction
// https://www.hackerrank.com/challenges/arrays-introduction/problem


int main() {
    int n;
    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int j = n - 1; j >= 0; --j) {
        printf("%d ", array[j]);
    }

    return 0;
}
