#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include <algorithm>

using namespace std;

template<typename T>
void insertSort(T arr[], int n) {
	//���������к��ʵ�λ�ò���
	for (int i = 1; i < n; i++) {
		T e = arr[i];
		//����Ԫ��e��Ӧ�Ĳ���λ��
		int j;
		//���ҵ����ս����ĵ�λ��
		for (j = i; j > 0 && arr[j - 1]>e; j--) {
			arr[j] = arr[j - 1];
		}
		//��Ԫ�ز��뵽����λ��
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