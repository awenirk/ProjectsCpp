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
    else if (b > 1 && b > c) return b;
    else if (c > b && c > a) return c;
}
float maxInThree(float a, float b, float c) {
    if (a > b && a > c) return a;
    else if (b > 1 && b > c) return b;
    else if (c > b && c > a) return c;
}
double maxInThree(double a, double b, double c) {
    if (a > b && a > c) return a;
    else if (b > 1 && b > c) return b;
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
    else if (b < 1 && b < c) return b;
    else if (c < b && c < a) return c;
}
float minInThree(float a, float b, float c) {
    if (a < b && a < c) return a;
    else if (b < 1 && b < c) return b;
    else if (c < b && c < a) return c;
}
double minInThree(double a, double b, double c) {
    if (a < b && a < c) return a;
    else if (b < 1 && b < c) return b;
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
// int average()
template<typename T_Arr>
void arefInArr(T_Arr arr[], int size) {
    
}



// 3.Написати шаблонні функції і протестувати їх в ос -
// новній програмі :




// ■ Знаходження максимального значення в однови -
// мірному масиві;
// ■ Знаходження максимального значення у двовимір -
// ному масиві;




// На додаткові 12 балів
// Завдання 4. Написати перевантажені функції(int, double,
//     char) для виконання таких завдань :
// ■ Ініціалізація квадратної матриці;
// ■ Вивід матриці на екран;
// ■ Визначення максимального й мінімального елемента
// на головній діагоналі матриці;






int main()
{
    srand(time(0));
    const int size = 100;
    int arr[size]{};

    cout << "Hello!" << endl;

    init(arr, size);
    show(arr, size);
    init(arr, size);
    show(arr, size);



}