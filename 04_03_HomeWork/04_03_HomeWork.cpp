#include <iostream>
using namespace std;

int main()
{
    // 1.Вивести на екран цілі числа від 14 до 123. - while
    int temp, count, N, dob, sum, num1, num2;
    double aref;
    /*
    temp = 14;
    while (temp <= 123) {
        cout << temp << " ";
        temp++;
    }
    */

    // 2.Вивести на екран додатні непарні числа, які не перевищують 100. - while
    /*
    temp = 1;
    while (temp <= 100) {
        if (temp % 2 != 0) {
            cout << temp << " ";
        }
        temp++;
    }
    */

    // 3.Дано N (N>0). Вводяться N чисел. Знайти кількість від’ємних серед них. - while
    /*
    N = 6;
    count = 0;
    while (N > 0) {
        cout << "Enter num: "; cin >> temp;
        if (temp < 0) {
            count++;
        }
        N--;
    }
    cout << "Negative nums: " << count << endl;
    */

    // 4.Вводяться 8 чисел. Знайти добуток та середнє арифметичне цих чисел. - while
    /*
    N = 8;
    dob = 1;
    sum = 0;
    while (N > 0) {
        cout << "Enter num: "; cin >> temp;
        dob *= temp;
        sum += temp;
        N--;
    }
    aref = (double)sum / 8;
    cout << "Dobutok: " << dob << endl;
    cout << "Arefmetychne: " << aref << endl;
    */

    // 5.Вивести на екран цілі непарні числа : 100 98 96 94...4  2 1. - do..while
    /*
    N = 100;
    do
    {
        if (N % 2 != 0) {
            cout << N << " ";
        }
        N--;

    } while (N > 1);
    */

    // 6.Написати програму яка обчислює добуток п’яти чисел, які вводяться з клавіатури. - do..while
    /*
    N = 5;
    dob = 1;
    do
    {
        cout << "Enter num: "; cin >> temp;
        dob *= temp;
        N--;
    } while (N > 0);
    cout << "Dob 5 nums: " << dob << endl;
    */


    // На +12 балів :
    // 7.Напишіть програму знаходження суми чисел менше 50 і кратних 4, 
    // використовуючи всі два типи циклів.
    /*
    sum = 0;
    N = 50;
    while (N > 0) {
        if (N % 4 == 0) {
            sum += N;
        }
        N--;
    }
    cout << "Sum: " << sum << endl;
    */

    /*
    sum = 0;
    for (int i = 0; i < 50; i++)
    {
        if (i % 4 == 0) {
            sum += i;
        }
    }
    cout << "Sum: " << sum << endl;
    */

    // 8. Вивести на екран усі числа від нуля до вве-
    // деного користувачем числа.
    /*
    cout << "Enter num: "; cin >> temp;
    N = 0;
    while (N <= temp) {
        cout << N << " ";
        N++;
    }
    */

    // 9. Користувач вводить дві межі діапазону, ви-
    // вести на екран усі числа з цього діапазону. Передбачити,
    // щоб користувач міг вводити межі діапазону в довільному
    // порядку.
    // ■ вивести всі парні числа з діапазону.
    // ■ вивести всі непарні числа з діапазону.
    // ■ вивести всі числа, кратні семи.
    /*
    cout << "Enter num1: "; cin >> num1;
    cout << "Enter num2: "; cin >> num2;
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    else if (num1 == num2){
        cout << "Numbers are equal!" << endl;
    }
    N = num1;
    while (num1 <= num2) {
        if (num1 % 2 == 0) {
            cout<< num1 <<" ";
        }
        num1++;
    }
    num1 = N;
    cout << endl;
    while (num1 <= num2) {
        if (num1 % 2 != 0) {
            cout<< num1 <<" ";
        }
        num1++;
    }
    num1 = N;
    cout << endl;
    while (num1 <= num2) {
        if (num1 % 7 == 0) {
            cout<< num1 <<" ";
        }
        num1++;
    }
    */

    // 10. Користувач вводить дві межі діапазону. По-
    // рахувати суму всіх чисел діапазону.
    /*
    cout << "Enter num1: "; cin >> num1;
    cout << "Enter num2: "; cin >> num2;
    sum = 0;
    while (num1 <= num2) {
        sum += num1;
        num1++;
    }
    cout << "Sum: " << sum << endl;
    */

    // 11. Користувач з клавіатури вводить числа. По-
    // рахувати їхню суму і вивести на екран, щойно користувач
    // введе нуль.
    /*
    temp = 1;
    sum = 0;
    cout << "Enter 0 to exit." << endl;
    while (temp != 0) {
        cout << "Enter num: "; cin >> temp;
        sum += temp;
    }
    cout << "Sum: " << sum << endl;
    */


}
