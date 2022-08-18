#include <iostream>
using namespace std;

#include "solution.h"


//8
//60 70 80 100 90 75 80 120

//1 2 3 4 1 1 2 8
int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}