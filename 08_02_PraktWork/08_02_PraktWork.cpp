#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

const int globalSize = 25;

void drawSquare(int N, int K);
long long factorial(long long num);
bool isPrime(int num);
int numInCube(int num);
int biggerInTwo(int num1, int num2);
bool isPositive(int num);

void fillArr(int arr[], int size, int start, int max);
void outArr(int arr[], int size, int set);
void okantovka(int width);

void minMax2(int arr[], int size);
void reverseArr(int arr[], int size);
int primeInArr(int arr[], int size, int set);

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));
    long long factorialNum = 3;
    int someNum = 3, secondNum = 3;

    // drawSquare(4, 10);

    // cout << "Enter factorial (< 21): "; cin >> factorialNum;
    // cout << factorialNum << "! = " << factorial(factorialNum) << endl;

    // cout << "Enter number to prime: "; cin >> someNum;
    // cout << isPrime(someNum) << endl;

    // cout << "Enter number to cube: "; cin >> someNum;
    // cout << numInCube(someNum) << endl;

    // cout << "Enter number: "; cin >> someNum;
    // cout << "Enter number: "; cin >> secondNum;
    // cout << biggerInTwo(someNum, secondNum) << endl;

    // cout << "Enter number: "; cin >> someNum;
    // cout << isPositive(someNum) << endl;


    // На додаткові 12 балів:
    int start = 0,
        countNums = 100,
        set = 3,
        size = ::globalSize,
        arr[::globalSize]{};
    
    // cout << "Enter start array: "; cin >> start;
    // cout << "Enter count nums in array: "; cin >> countNums;
    // cout << "Enter set: "; cin >> set;
    fillArr(arr, size, start, countNums);


    // outArr(arr, size, set);
    // minMax2(arr, size);


    // outArr(arr, size, set);
    // reverseArr(arr, size);
    // outArr(arr, size, set);
    // reverseArr(arr, size);


    // cout << endl;
    // outArr(arr, size, set);
    // cout << "Prime: " << primeInArr(arr, size, set) << endl;

}


//1.Написати функцію, що виводить на екран прямокут-
// ник з висотою N і шириною K.
void drawSquare(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cout << "# ";
        }
        cout << endl;
    }
}
// 2. Написати функцію, яка обчислює факторіал переда -
// ного їй числа. 5!= 1 * 2 * 3 * 4 * 5
long long factorial(long long num) {
    long long num1 = 1;
    for (int i = 1; i <= num; i++) {
        num1 *= i;
    }
    return num1;
}
// 3 * **.Написати функцію, яка перевіряє, чи є передане їй
// число простим.Число називається простим, якщо воно
// ділиться без залишку тільки на себе та на одиницю.
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
// 4. Написати функцію, яка повертає куб числа.
int numInCube(int num) {
    int res;
    res = num;
    for (int i = 1; i < 3; i++) {
        res *= num;
    }
    return res;
}
// 5. Написати функцію для знаходження найбільшого з двох чисел.
int biggerInTwo(int num1, int num2) {
    if (num1 > num2) return num1;
    else if (num2 > num1) return num2;
    else if (num1 == num2) {
        cout << "Nums are equals! " << endl;
        return num1;
    }
    else cout << "HOW?!" << endl;
}
// 6. Написати функцію, яка повертає істину,
// якщо передане значення додатне, та брехню, якщо від’ємне.
bool isPositive(int num) {
    if (num > 0) return true;
    else if (num < 0) return false;
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
// На додаткові 12 балів:
// 1. Написати функцію, що визначає мінімум і максимум
// (значення й номер) елементів переданого їй масиву. 
void minMax2(int arr[], int size) {
    int min = arr[0], max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "Max num -->" << setw(4) << max << endl;
    cout << "Min num -->" << setw(4) << min << endl;
}
// 2. Написати функцію, яка міняє порядок елементів
// переданого їй масиву на протилежний.
void reverseArr(int arr[], int size) {
    int start = 0, end = size - 1;
    for (int i = start; i < end; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Array reversed!" << endl;
}
// 3. Написати функцію, яка повертає кількість
// простих чисел у переданому їй масиві.
int primeInArr(int arr[], int size, int set) {
    int temp = 0, reqQidth = set * size;
    cout << "Is prime: " << endl;
    okantovka(reqQidth);
    for (int i = 0; i < size; i++)
    {
        cout << setw(set) << isPrime(arr[i]);
        if (isPrime(arr[i]) == 1) temp++;
    }
    cout << " |" << endl;
    okantovka(reqQidth);
    return temp;
}