#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

const int size = 100;
// Не по завданню, для зручності:
void fillArr(int arr[], int size, int start, int max);
void outArr(int arr[], int size, int set);
void okantovka(int width);
void minMax(int arr[], int size);




void PosNegZero(int arr[], int size);

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));

    int start = 0,
        maxNum = 20,
        set = 3,
        size = ::size,
        arr[::size]{};

    fillArr(arr, size, start, maxNum);
    outArr(arr, size, set);
    minMax(arr, size);
    PosNegZero(arr, size);

}

// Не по завданню, для зручності:
void fillArr(int arr[], int size, int start, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = start-1 + rand() % max+2;
    }
}
void outArr(int arr[], int size, int set) {
    int reqQidth = set * size;
    okantovka(reqQidth);
    for (int i = 0; i < size; i++)
    {
        cout << setw(set) << arr[i];
    }
    cout << " |" << endl;
    okantovka(reqQidth);
}
void okantovka(int width) {
    for (int i = -1; i < width; i++)
    {
        cout << "=";
    }
    cout << "#" << endl;
}
void minMax(int arr[], int size) {
    int min = arr[0], max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "Max num -->" << setw(4) << max << endl;
    cout << "Min num -->" << setw(4) << min << endl;
}


// Завдання 1. Написати функцію, яка приймає дві дати
// (тобто функція приймає шість параметрів) та обчислює
// різницю в днях між цими датами.Для виконання цього
// завдання необхідно також написати функцію, яка визна -
// чає, чи є рік високосним.




// Завдання 2. Написати функцію, що визначає середнє
// арифметичне елементів переданого їй масиву.




// Завдання 3. Написати функцію, що визначає кількість
// додатних, від'ємних і нульових елементів переданого їй
// масиву.
void PosNegZero(int arr[], int size) {
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0) zero++;
        if (arr[i] > 0) positive++;
        if (arr[i] < 0) negative++;

    }
    cout << "Zero in array -->" << zero << endl;
    cout << "Positive nums in array -->" << positive << endl;
    cout << "Negative nums ai arrat -->" << negative << endl;
}




