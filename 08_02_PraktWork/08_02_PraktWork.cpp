#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;


void drawSquare(int N, int K);
int factorial(int num);

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));
    int a = 60;

    drawSquare(4, 10);
    cout << "Enter factorial: "; cin >> a;
    cout << factorial(a) << endl;

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
int factorial(int num) {
    int num1 = 1;
    for (int i = 1; i <= num; i++) {
        num1 *= i;
    }
    return num1;
}



// 3 * **.Написати функцію, яка перевіряє, чи є передане їй
// число простим.Число називається простим, якщо воно
// ділиться без залишку тільки на себе та на одиницю.




// 4. Написати функцію, що визначає мінімум і максимум
// (значення й номер) елементів переданого їй масиву.



