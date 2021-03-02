#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    int plh = *lhs;
    *lhs = *rhs;
    *rhs = plh;
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {

    int **array[num_cols][num_rows];

    for (int i = 0; i < num_cols; ++i) {
        for (int j = 0; j < num_rows; ++j) {
            **array[i][j] = init_value;
        }
    }
    return **array;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    // напишите код здесь ...

    return false;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for (int i = 0; i < arr.size() / 2; ++i) {
        swap_args(&arr[i], &arr[arr.size() - 1 - i]);
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {

}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odds = {};

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0) {
            odds.emplace_back(arr[i]);
        }
    }
    return odds;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> commons = {};

    for (int i = 0; i < arr_a.size(); ++i) {
        for (int j = 0; j < arr_b.size(); ++j) {
            if (arr_a[i] == arr_b[j]) {
                bool foundSimilar = false;
                for (int k = 0; k < commons.size(); ++k) {
                    if (arr_a[i] == commons[k]) {
                        foundSimilar = true;
                    }
                }
                if (!foundSimilar) {
                    commons.emplace_back(arr_a[i]);
                }
            }
        }
    }

    return commons;
}
