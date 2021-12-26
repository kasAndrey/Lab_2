#pragma once
#include <iostream>
#include <fstream>

using namespace std;

const int N = 20;
//filling one array with the values of another
void mix(int first_array[], int second_array[], int lengh)
{
    for (int i = 0; i < lengh; i++)
        second_array[i] = first_array[i];
}

int input_arra_int(int array_int[])
{
    ifstream in_int("input_int.txt");
    int i = 0, tmp{}, real_size{};

    while (!in_int.eof())
    {
        in_int >> tmp;
        array_int[i] = tmp;
        i++;
        if (i == N) break;
    }

    return (real_size = i - 1);

}

void output_arra_int(int array_int[], int real_size)
{
    for (int i = 0; i <= real_size; i++)
    {
        cout << array_int[i] << " ";
    }
}

char input_array_char(char array_char[])
{
    ifstream in_char("input_char.txt");
    int i = 0; char tmp{}; int real_size{};

    while (!in_char.eof())
    {
        in_char >> tmp;
        array_char[i] = tmp;
        i++;
        if (i == N) break;
    }

    return (real_size = i - 1);
}

void output_arra_char(char array_int[], int real_size)
{
    for (int i = 0; i <= real_size; i++)
    {
        cout << array_int[i] << " ";
    }
}