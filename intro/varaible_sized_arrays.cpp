#include <iostream>
#include <vector>

using namespace std;

// Variable Sized Arrays
// https://www.hackerrank.com/challenges/variable-sized-arrays/problem


int main() {
    int numArrays, queries;

    cin >> numArrays;   // number of `arrays`
    cin >> queries;     // number of `queries`

    vector<vector<int>> array(numArrays);   // |OR| vector<vector<int>> array |WITH| array.push_back(sub_array);

    // loop over `arrays`
    for (int n_i = 0; n_i < numArrays; ++n_i) {
        int k, input;

        cin >> k;   // number of sub_array elements

        vector<int> sub_array(k);   // |OR| vector<int> sub_array |WITH| sub_array.push_back(input);

        for (int sub_i = 0; sub_i < k; ++sub_i) {
            cin >> input;       // element
            sub_array[sub_i] = input;
        }
        array[n_i] = sub_array;
    }

    // loop over `queries`
    for (int q_i = 0; q_i < queries; ++q_i) {
        int arr, index;

        cin >> arr;         // query `array`
        cin >> index;       // query `index`

        printf("%d\n", array[arr][index]);
    }

    return 0;
}
