#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;


void drawSquare(int N, int K);
long long factorial(long long num);
bool isPrime(int num);






int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));
    long long someNum = 60;

    drawSquare(4, 10);

    cout << "Enter factorial (< 21): "; cin >> someNum;
    cout << someNum << "! = " << factorial(someNum) << endl;

    cout << "Enter number: "; cin >> someNum;
    cout << isPrime(someNum) << endl;


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
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) return false;
    }
    return true;
}
// 4. Написати функцію, яка повертає куб числа.




// 5. Написати функцію для знаходження найбільшого з двох чисел.




// 6. Написати функцію, яка повертає істину, якщо передане значення додатне, та брехню, якщо від’ємне.





// На додаткові 12 балів:
// 1. Написати функцію, що визначає мінімум і максимум
// (значення й номер) елементів переданого їй масиву. 



// 2. Написати функцію, яка міняє порядок елементів
// переданого їй масиву на протилежний.




// 3. Написати функцію, яка повертає кількість
// простих чисел у переданому їй масиві.





