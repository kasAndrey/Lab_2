#pragma once
void InsertionSort(int arrayPtr[], int length) // sorting by inserts
{
    int temp, // temporary variable for storing the value of an element of the sorted array
        item; // index of the previous element
    for (int counter = 1; counter < length; counter++)
    {
        temp = arrayPtr[counter]; // initialize the temporary variable with the current value of the array element
        item = counter - 1; // we remember the index of the previous element of the array
        while (item >= 0 && arrayPtr[item] > temp) // as long as the index is not equal to 0 and the previous element of the array is larger than the current one
        {
            arrayPtr[item + 1] = arrayPtr[item]; // rearranging array elements
            arrayPtr[item] = temp;
            item--;
        }
    }
}