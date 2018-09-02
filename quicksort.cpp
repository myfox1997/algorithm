// quicksort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void swap(int &a, int &b) {
	int temp = 0;
	temp = b;
	b = a;
	a = temp;
}

int GetMid(int* array, int left, int right)
{
	assert(array);
	int mid = left + ((right - left) >> 1);
	if (array[left] <= array[right])
	{
		if (array[mid] <  array[left])
			return left;
		else if (array[mid] > array[right])
			return right;
		else
			return mid;
	}
	else
	{
		if (array[mid] < array[right])
			return right;
		else if (array[mid] > array[left])
			return left;
		else
			return mid;
	}

}


int PartSort(int * ary, int left, int right) {
	assert(ary);
	int mid = GetMid(ary, left, right);
	swap(ary[mid], ary[right]);

	int &key = ary[right];

	while (left < right) {
		while (left < right && ary[left] <= key) {
			++left;
		}
		while (left < right && ary[right] >= key) {
			--right;
		}
		swap(ary[left], ary[right]);

	}
	swap(ary[left], key);
	return left;
}

void QuickSort(int * array, int left, int right) {
	assert(array);
	if (left >= right)  //已经完成 
	{
		return;
	}
	int index = PartSort(array, left, right);
	QuickSort(array, left, index - 1);
	QuickSort(array, index + 1, right);
}

void showAns(int * array, int length) {
	assert(array);
	for (int i = 0; i < length; i++) {
		printf("%d  ", array[i]);
	}
}
/*
int main()
{
	int array[] = { 5, 3, 5, 5, 9, 11, 45, 1, 2, 0 };
	int length = sizeof(array) / sizeof(array[0]) - 1;
	QuickSort(array, 0, length);
	showAns(array, length);
	char c = getchar();
	return 0;
}
*/

