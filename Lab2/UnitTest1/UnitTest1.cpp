#include "pch.h"
#include "CppUnitTest.h"
#include "../Search_Binary.h"
#include "../BogoSort.h"
#include "../countSort.h"
#include "../InsertionSort.h"
#include "../QuickSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(binary_search_test)
		{
			int arr[5];
			arr[0] = 5;
			arr[1] = 4;
			arr[2] = 3;
			arr[3] = 2;
			arr[4] = 1;

			int atArr = Search_Binary(arr, 0, 4, 3);
			Assert::IsTrue(atArr == 2);
		}

		TEST_METHOD(quickSort_test)
		{
			int* arr = new int[5];
			arr[0] = 5;
			arr[1] = 10;
			arr[2] = 1;
			arr[3] = 2;
			arr[4] = 1;
			QuickSort(arr, 5);

			bool right = 1;
			for (int i = 0; i < 4; i++) {
				if (arr[i] > arr[i + 1]) {
					right = 0;
				}
			}
			Assert::IsTrue(right == 1);
		}

		TEST_METHOD(insertionSort_test) {
			int* arr = new int[5];
			arr[0] = 5;
			arr[1] = 10;
			arr[2] = 1;
			arr[3] = 2;
			arr[4] = 1;
			InsertionSort(arr, 5);

			bool right = 1;
			for (int i = 0; i < 4; i++) {
				if (arr[i] > arr[i + 1]) {
					right = 0;
				}
			}
			Assert::IsTrue(right == 1);
		}

		TEST_METHOD(bogoSort_test) {
			srand(time(NULL));
			int* arr;
			int size;
			size = 5;
			arr = new int[size];

			arr[0] = 5;
			arr[1] = 10;
			arr[2] = 1;
			arr[3] = 2;
			arr[4] = 1;

			bogoSort(arr, size);

			bool right = 1;
			for (int i = 0; i < 4; i++) {
				if (arr[i] > arr[i + 1]) {
					right = 0;
				}
			}
			Assert::IsTrue(right == 1);
		}

		TEST_METHOD(countingSort_test) {
			char* arr = new char[5];
			arr[0] = 'a';
			arr[1] = 'b';
			arr[2] = 'd';
			arr[3] = 'a';
			arr[4] = 'b';
			countSort(arr, 5);

			bool right = 1;
			for (int i = 0; i < 4; i++) {
				if (int(arr[i]) > int(arr[i + 1])) {
					right = 0;
				}
			}
			Assert::IsTrue(right == 1);
		}
		
	};
}
