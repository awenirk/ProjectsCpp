#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

void sayHello(); // prorotype functions
void star(int Count);
void anyLine(char symbol, int count);
int mypow(int num, int step);
int max(int a, int b);
void first();



int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));

    const int size = 10;
    int arr[size] = {};

	const int rows = 6, cols = 6;
    int array[rows][cols] = {};

	int res = mypow(2, 5);
    star(5);
	anyLine('!', 10);
	cout << "Max number: " << max(10, 20) << endl;
	cout << "Min number: " << min(10, 20) << endl;
    first();

}






void initMatrix(int arr[][6], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = 10 + rand() % 90;
        }
    }
}
void initMatrix(int arr[][6], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void initArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
		cout << arr[i] << " ";
    }
    cout << endl;
}
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
		sum += arr[i];
    }
    return sum;

}

void change(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void second();
void first() {
	cout << "first function start" << endl;
    second();
	cout << "first function end" << endl;
}
void second() {
	cout << "second function" << endl;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}
int min(int a, int b) {
	return (a < b) ? a : b;
}

int mypow(int num, int step) {
    int pow = 1;
    for (int i = 0; i < step; i++)
    {
        pow *= num;
    }
    cout << "Pow number: " << pow << endl;
    return pow;
}
void anyLine(char symbol, int count) {
    for (int i = 0; i < count; i++)
    {
        cout << symbol << " ";
    }
    cout << endl;
}
void star(int Count) {
    for (int i = 0; i < Count; i++)
    {
        cout << "* ";
    }
	cout << endl;
}
void sayHello() {
    cout << "Hello, World!" << endl;
}