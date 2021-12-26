#include "countSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "BogoSort.h"
#include "Search_Binary.h"
#include "Sup_f.h"

using namespace std;


int main()
{
    cout << "Kasatkin Andrey gr. 0309. LR2" << endl << endl;

    int array_int[N], array_support[N];
    int i{}, real_size = 0;
    char array_char[N];


    //заполнение изначального массива
    real_size = input_arra_int(array_int);
    cout << "Source array: " << endl;
    output_arra_int(array_int, real_size);
    mix(array_int, array_support, real_size + 1);
    cout << endl;
    cout << endl;

    //QuickSort
    QuickSort(array_int, real_size+1);
    cout << "Array after quick sorting:" << endl;
    output_arra_int(array_int, real_size);
    mix(array_support, array_int, real_size + 1);
    cout << endl << "Source array: " << endl;
    output_arra_int(array_int, real_size);
    cout << endl;
    cout << endl;

    //InsertionSort
    InsertionSort(array_int, real_size + 1);
    cout << "Array after sorting by inserts:" << endl;
    output_arra_int(array_int, real_size);
    mix(array_support, array_int, real_size + 1);
    cout << endl << "Source array: " << endl;
    output_arra_int(array_int, real_size);
    cout << endl;
    cout << endl;

    //bogoSort
    bogoSort(array_int, real_size + 1);
    cout << "Array after bogoSort, just a poor and very inefficient sorting: " << endl;
    output_arra_int(array_int, real_size);
    cout << endl;
    cout << endl;

    //BinarySearch
    cout << "searching for an element equal to 10 in the integer array:" << endl;
    i = Search_Binary(array_int, 0, real_size, 10);
    cout << "the index is equal to: " << i << endl << endl;

    //countSort
    real_size = input_array_char(array_char);
    cout << "Source array: " << endl;
    output_arra_char(array_char, real_size);
    cout << "\nArray after sorting by counting:" << endl;
    countSort(array_char, real_size);
    output_arra_char(array_char, real_size);
    cout << endl;
    cout << endl;
}