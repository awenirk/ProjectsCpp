#include <iostream>
#include <iomanip>
using namespace std;

//1.Реалізуйте перевантажені функції для (
// ■ Знаходження максимального значення двох цілих; (int a, int b)  (float a, float b)  (double a, double b)
// ■ Знаходження максимального значення трьох цілих.
// ■ Знаходження мінімального значення двох цілих;
// ■ Знаходження мінімального значення трьох цілих.
int maxInTwo(int a, int b) {
    return (a > b) ? a : b;
}
float maxInTwo(float a, float b) {
    return (a > b) ? a : b;
}
double maxInTwo(double a, double b) {
    return (a > b) ? a : b;
}
int maxInThree(int a, int b, int c) {
    if (a > b && a > c) return a;
    else if (b >a && b > c) return b;
    else if (c > b && c > a) return c;
}
float maxInThree(float a, float b, float c) {
    if (a > b && a > c) return a;
    else if (b > a && b > c) return b;
    else if (c > b && c > a) return c;
}
double maxInThree(double a, double b, double c) {
    if (a > b && a > c) return a;
    else if (b > a && b > c) return b;
    else if (c > b && c > a) return c;
}

int minInTwo(int a, int b) {
    return (a < b) ? a : b;
}
float minInTwo(float a, float b) {
    return (a < b) ? a : b;
}
double minInTwo(double a, double b) {
    return (a < b) ? a : b;
}
int minInThree(int a, int b, int c) {
    if (a < b && a < c) return a;
    else if (b < a && b < c) return b;
    else if (c < b && c < a) return c;
}
float minInThree(float a, float b, float c) {
    if (a < b && a < c) return a;
    else if (b < a && b < c) return b;
    else if (c < b && c < a) return c;
}
double minInThree(double a, double b, double c) {
    if (a < b && a < c) return a;
    else if (b < a && b < c) return b;
    else if (c < b && c < a) return c;
}

// 2. Написати шаблон функції для пошуку середнього
// арифметичного значення масиву.
void init(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 1 + rand() % 100;
    }
}
void show(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//int average(int arr[], int size) {
//    int temp = 0;
//    for (int i = 0; i < size; i++) {
//        arr[i] = 1 + rand() % 100;
//    }
//}
template<typename T_Arr>
void arefInArr(T_Arr arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float aref = (double)sum / size;
    cout << "Aref in arr: " << aref << endl;
}
// 3.Написати шаблонні функції і протестувати їх в ос -
// новній програмі :
// ■ Знаходження максимального значення в однови -
// мірному масиві;
int oneArrMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
// ■ Знаходження максимального значення у двовимір -
// ному масиві;
void fillTwoArr(int arr[][11], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = 1 + rand() % 1000;
        }
    }
}


// На додаткові 12 балів
// Завдання 4. Написати перевантажені функції (int, double, char)
// для виконання таких завдань :

// ■ Ініціалізація квадратної матриці;
int twoArrMax(int arr[][11], int size) {
    int max = arr[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}
double twoArrMax(double arr[][11], int size) {
    double max = arr[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}
char twoArrMax(char arr[][11], int size) {
    char max = arr[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}
// ■ Вивід матриці на екран;
int twoArrOut(int arr[][11], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
    }
}
double twoArrOut(double arr[][11], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
    }
}
char twoArrOut(char arr[][11], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
    }
}
// ■ Визначення максимального й мінімального елемента
// на головній діагоналі матриці;
void twoArrMaxMin(int arr[][11], int size) {
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < size; i++) {
        if (arr[i][i] > max) max = arr[i][i];
        if (arr[i][i] < min) min = arr[i][i];
    }
    cout << min << " " << max << endl;
}
void twoArrMaxMin(double arr[][11], int size) {
    double max = arr[0][0];
    double min = arr[0][0];
    for (int i = 0; i < size; i++) {
        if (arr[i][i] > max) max = arr[i][i];
        if (arr[i][i] < min) min = arr[i][i];
    }
    cout << min << " " << max << endl;
}
void twoArrMaxMin(char arr[][11], int size) {
    char max = arr[0][0];
    char min = arr[0][0];
    for (int i = 0; i < size; i++) {
        if (arr[i][i] > max) max = arr[i][i];
        if (arr[i][i] < min) min = arr[i][i];
    }
    cout << min << " " << max << endl;
}


void main()
{
    srand(time(0));
    const int size = 11;
    int arr1[size]{};
    int arr2[size][size]{};

    // cout << "Hello!" << endl;
    init(arr1, size);
    // show(arr1, size);
    // cout << endl;
    arefInArr(arr1, size);

    fillTwoArr(arr2, size);

    cout << oneArrMax(arr1, size) << endl;
    cout << twoArrMax(arr2, size) << endl;


}