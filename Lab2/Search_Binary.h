#pragma once
#include <iostream>
#include <fstream>

using namespace std;

int Search_Binary(int arr[], int left, int right, int key)
{
    int midd = 0;
    while (1)
    {
        midd = (left + right) / 2;
        if (key < arr[midd])       // if the desired value is less than the value in the cell
            right = midd - 1;      // shifting the right border of the search
        else if (key > arr[midd])  // if the desired value is greater than the value in the cell
            left = midd + 1;    // shifting the left border of the search
        else                       // otherwise (the values are equal)
            return midd;           // the function returns the index of the cell

        if (left > right)          // if the borders have closed
            return -1;
    }
}