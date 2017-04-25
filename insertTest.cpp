#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include <algorithm>

using namespace std;

template<typename T>
void insertSort(T arr[], int n) {
	//查找数组中合适的位置插入
	for (int i = 1; i < n; i++) {
		T e = arr[i];
		//保存元素e对应的插入位置
		int j;
		//查找到最终交换的的位置
		for (j = i; j > 0 && arr[j - 1]>e; j--) {
			arr[j] = arr[j - 1];
		}
		//将元素插入到合适位置
		arr[j] = e;
	}
}

int main() {
	int arr[10] = {90,20,56,67,88,89,35,21,23,66};
	insertSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}