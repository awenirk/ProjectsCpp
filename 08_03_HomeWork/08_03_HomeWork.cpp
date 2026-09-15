#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

const int globalSize = 25;
// Не по завданню, для зручності:
void fillArr(int arr[], int size, int start, int max);
void outArr(int arr[], int size, int set);
void okantovka(int width);
void minMax(int arr[], int size);


bool isLeapYear(int year);
int daysInMonth(int year, int month);
int dateToDay(int day, int month, int year);
void dateDiff(int d1, int m1, int y1, int d2, int m2, int y2);

void arefArr(int arr[], int size);
void PosNegZero(int arr[], int size);

int main()
{
    setlocale(LC_ALL, "");
    srand(time(0));

    int start = -20,
        maxNum = 20,
        set = 4,
        size = ::globalSize,
        arr[::globalSize]{};

    fillArr(arr, size, start, maxNum);

    // outArr(arr, size, set);
    // minMax(arr, size);

    dateDiff(29, 2, 2024, 1, 1, 2025);
    cout << endl;
    dateDiff(1, 1, 2023, 1, 1, 2024);


    // cout << endl;
    // outArr(arr, size, set);
    // arefArr(arr, size);

    // cout << endl;
    // PosNegZero(arr, size);



}

// Не по завданню, для зручності:
void fillArr(int arr[], int size, int start, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = start + (rand() % (max - start + 1));
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
bool isLeapYear(int year) {
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}
int daysInMonth(int year, int month) {
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}
int dateToDay(int day, int month, int year) {
    int totalDays = 0;
    for (int y = 1; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    int daysInCurrentYear = 0;
    for (int m = 1; m < month; m++) {
        daysInCurrentYear += daysInMonth(year, m);
    }
    totalDays += daysInCurrentYear + day;
    return totalDays;
}
void dateDiff(int d1, int m1, int y1, int d2, int m2, int y2) {
    int dayCount1 = dateToDay(d1, m1, y1);
    int dayCount2 = dateToDay(d2, m2, y2);

    int diff = (dayCount1 > dayCount2) ? (dayCount1 - dayCount2) : (dayCount2 - dayCount1);
    cout << diff << endl;
}
// Завдання 2. Написати функцію, що визначає середнє
// арифметичне елементів переданого їй масиву.
void arefArr(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float aref = sum / size;
    cout << "Summa: " << sum << endl;
    cout << "seredne arefmetychne: " << aref << endl;
}
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
