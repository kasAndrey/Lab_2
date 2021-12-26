#pragma once
void QuickSort(int array[], int size)
{
    //Pointers to the beginning and end of the array
    int i = 0;
    int j = size - 1;

    //The central element of the array
    int mid = array[size / 2];

    //Делим массив
    do {
        //We run through the elements, looking for those that need to be transferred to another part
        //In the left part of the array, we skip (leave in place) elements that are smaller than the central one
        while (array[i] < mid) {
            i++;
        }
        //In the right part, skip the elements that are larger than the central one
        while (array[j] > mid) {
            j--;
        }

        //Swapping the elements
        if (i <= j) {
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);


    //Recursive calls, if there is anything left to sort
    if (j > 0) {
        //"The left piece"
        QuickSort(array, j + 1);
    }
    if (i < size) {
        //"The right piece"
        QuickSort(&array[i], size - i);
    }
}