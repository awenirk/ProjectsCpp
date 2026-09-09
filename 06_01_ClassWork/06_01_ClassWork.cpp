#include <iostream>
using namespace std;
	
int main()
{
    // масив - це набір однотипних данних, об'єднаних загальним ім'ям
	
	/*
    int train[3];
	train[0] = 10;
	train[1] = 20;
	train[2] = 30;
	cout << "Vagon 1: " << train[0] << endl;
	cout << "Vagon 2: " << train[1] << endl;
	cout << "Vagon 3: " << train[2] << endl;
	*/

	/*
	const int size = 12;
	int marks[size];
	marks[0] = 12;
	marks[1] = 11;
	marks[2] = 12;
	marks[3] = 11;
	marks[4] = 10;
	marks[5] = 12;
	marks[6] = 12;
	marks[7] = 11;
	marks[8] = 11;
	marks[9] = 12;
	marks[10] = 10;
	marks[11] = 11;
	cout << "Marks: " << marks[0] << " - " << marks[1] << " - " << marks[11] << endl;
	*/
	
	/*
	int arr1[4]; // так не робити

	const int size = 10; // так робити
	double arr2[size];
	*/

	/*
	const int size = 10;
	int arr1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	int arr2[size] = {};
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " "; // 0, 0, 0, 0...
	}
	cout << endl;
	int arr3[size] = { 1, 2, 3 };
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i] << " "; // 1, 2, 3, 0, 0, 0...
	}
	cout << endl;
	int arr4[size] = {};
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr4[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr4[i] << " ";
	}
	*/

	const int size = 10;
	int arr[size] = { 5, -9, 4, -78, 2, -15, 6, 4, 3, -1 };
	int max = arr[0], min = arr[0], suma = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			suma += arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Sum of negative numbers: " << suma << endl;
	cout << "Max number: " << max << endl;
	cout << "Min number: " << min << endl;
	














	return 0;
}