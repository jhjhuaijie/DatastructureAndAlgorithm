#include <iostream>
using namespace std;
void Swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
	return;
}
#pragma region √∞≈›≈≈–Ú
void BubbleSort(int A[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				Swap(A, j, j + 1);
			}
		}
	}
	return;
}
#pragma endregion √∞≈›≈≈–Ú
#pragma region —°‘Ò≈≈–Ú
void SelectSort(int A[], int n)
{
	for (int j = 0; j < n-1 ; j++)
	{
		int min = j;
		{
			for (int i = j+1; i < n; i++)
			{
				if (A[i] < A[min])
				{
					min = i;
				}
			}
		}
		if (min != j)
		{
			Swap(A, min, j);
		}
	}
	return;
}
#pragma endregion —°‘Ò≈≈–Ú
int main()
{
	int arr[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
	int len = sizeof(arr)/sizeof(int);

	//BubbleSort(arr, len);

	SelectSort(arr, len);
	for (auto item : arr)
	{
		cout << item << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}