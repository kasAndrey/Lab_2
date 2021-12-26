#pragma once

#include <fstream>

using namespace std;

int correct(int arr[], int size)
{
    while (size-- > 0)
        if (arr[size - 1] > arr[size])
            return 0;
    return 1;
}

void shuffle(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        swap(arr[i], arr[(rand() % size)]);
}

void bogoSort(int arr[], int size) {
    while (!correct(arr, size))
        shuffle(arr, size);
}