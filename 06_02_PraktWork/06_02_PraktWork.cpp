#include <iostream>
using namespace std;

int main()
{
    int dob = 1, suma = 0, negative = 0, positive = 0;
    // 1.Оголосити одновимірний масив з 10 елементів типу int.
    // Заповнити його значеннями з клавіатури, вивести на екран та
    // підрахувати добуток елементів масиву
    /*
    const int size = 10;
    int arr[size];
    dob = 1;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ": "; cin >> arr[i];
        dob *= arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << dob << endl;
    */

    // 2.Оголосити одновимірний масив з 7 елементів типу int.
    // Заповнити його випадковими значеннями в діапазоні[-12.. + 50]
    // та вивести на екран.
    // Підрахувати кількість відємних та додатніх елементів масиву.
    /*
    const int size = 7;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": "; cin >> arr[i];
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Count positive: " << positive << endl;
    cout << "Count negative: " << negative << endl;
    */

    // 3.Оголосити, проініціалізувати початковими значеннями та вивести
    // одновимірний масив з 7 елементів типу long.
    // Визначити суму парних елементів масиву
    /*
    const int size = 7;
    long arr[size] = { 2,2,5,4,5,6,45 };
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
        if (arr[i] % 2 == 0)
        {
            suma++;
        }
    }
    cout << "Suma pair: " << suma << endl;
    */

    // 4.Утворити одновимірний масив розміром 10. ///for = 1 2 3 ....10
    // Заповнити його числами, які є степенями 2: (2,4,8,16,32,....)
    // Вивести елементи масиву на екран у прямому і оберненому порядку.
    /*
    const int size = 10;
    int arr[size] = {};
    for (int i = 0; i < size; i++)
    {
        arr[i] = pow(2, i+1);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    */

    // 5.Дано одновимірний масив.Замінити всі від’ємні елементи їх модулями.
    // if (arr[i]< 0) arr[i]= arr[i]*-1;
    /*
    const int size = 10;
    int arr[size] = { 2,-2,-5,4,-5,6,45,-1,66,-71 };
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = arr[i] * -1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    */







    // Додаткове на 12 балів:

    // 8. Користувач вводить прибуток фірми за рік(12
    // місяців).Потім користувач вводить діапазон(наприклад,
    // 3 і 6 — пошук між третім і шостим місяцем).Необхідно
    // визначити місяць, у якому прибуток був максимальним, і
    // місяць, у якому прибуток був мінімальним, з урахуванням
    // обраного діапазону.









}