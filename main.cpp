#include <iostream>  // cout

#include "tasks.hpp"

using namespace std;

int main() {

    int *first = new int(3);
    int *second = new int(5);

    cout << "Before swap: " << *first << " , " << *second << endl;

    swap_args(first, second);

    cout << "Before swap: " << *first << " , " << *second << endl;

    cout << "Array: " << endl;

    int **array;

    //array = allocate_2d_array(3, 3, 1);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            //cout << "i,j: " << array[i][j];
        }
    }

    vector<int> arr = {1, 2, 4, 5};
    reverse_1d_array(arr);

    cout << "Vector: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    vector<int> odds = find_odd_numbers(arr);

    cout << "\nOdd: ";

    for (int i = 0; i < odds.size(); ++i) {
        cout << odds[i] << " ";
    }

    vector<int> arr1 = {1, 2, 4, 5};
    vector<int> arr2 = {10, 24, 4, 5};
    vector<int> commons = find_common_elements(arr1, arr2);

    cout << "\nCommons: ";

    for (int i = 0; i < commons.size(); ++i) {
        cout << commons[i] << " ";
    }

    return 0;
}