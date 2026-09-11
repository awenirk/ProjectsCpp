#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

int main()
{
    int a, b, max, min;
    srand(time(0));
    setlocale(LC_ALL, "Ukrainian");
    // 1. Дано масив розміром 4×3 з елементами цілого типу. 
    // Визначити кількість елементів відмінних від нуля. (0-5)
    // 2. Дано масив розміром 3×3 з елементами цілого типу.
    // Визначити кількість елементів які б дорівнювали нулю.
    /*
	const int rows1 = 4, cols1 = 3;
	int arr1[rows1][cols1] = {};
    a = 0, b = 0;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            arr1[i][j] = rand() % 5;
            cout << arr1[i][j] << " ";
            if (arr1[i][j] != 0) a++;
            else b++;
        }
		cout << endl;
    }
    cout << "Zero: "<< b << endl;
    cout << "Not zero: "<< a << endl;
    */

    // 3. Дано масив розміром 7×3 з елементами цілого типу.
    // Визначити кількість елементів, модуль яких менший 12. (-20 + rand() % 40)
    /*
    const int rows2 = 7, cols2 = 3;
    int arr2[cols2][rows2] = {};
    a = 0;
    for (int i = 0; i < cols2; i++)
    {
        for (int j = 0; j < rows2; j++)
        {
            arr2[i][j] = -20 + rand() % 40;
            cout << setw(6) << arr2[i][j];
            if (arr2[i][j] < 0) arr2[i][j] = arr2[i][j] * -1;
			if (arr2[i][j] < 12) a++;
        }
        cout << " |" << endl;
    }
    cout << "===========================================#" << endl;
    cout << "Elements with absolute value less than 12: " << a << endl;
    */

    // 4. Дано масив розміром 4×5 з елементами цілого типу(позитивні та від’ємні).
    // Визначити кількість позитивних елементів.
    /*
    const int rows3 = 4, cols3 = 5;
    int arr3[rows3][cols3] = {};
    a = 0;
    for (int i = 0; i < rows3; i++)
    {
        for (int j = 0; j < cols3; j++)
        {
            arr3[i][j] = -20 + rand() % 40;
            cout<< setw(6) << arr3[i][j];
            if (arr3[i][j] > 0) a++;
        }
        cout << " |" << endl;
    }
    cout << "===============================#" << endl;
    cout << "Positive elements: " << a << endl;
    */


    // 5. Дано масив розміром 5×4 з елементами дійсного типу(додатні та від’ємні).
    // Визначити добуток всіх додатніх елементів.
    // 6. Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
    // Визначити добуток всіх від’ємних елементів.
    /*
    const int rows4 = 4, cols4 = 5;
    int arr4[rows4][cols4] = {};
    a = 1, b = 1;
    for (int i = 0; i < rows4; i++)
    {
        for (int j = 0; j < cols4; j++)
        {
            arr4[i][j] = -10 + rand() % 20;
            cout << setw(6) << arr4[i][j];
            if (arr4[i][j] > 0) a *= arr4[i][j];
			else if (arr4[i][j] < 0) b *= arr4[i][j];
        }
        cout << " |" << endl;
    }
    cout << "===============================#" << endl;
    cout << "Product of positive elements: " << a << endl;
    cout << "Product of negative elements: " << b << endl;
    */


    // 7. Дано масив розміром 4×4 з елементами цілого типу.Визначити кількість
    // елементів, які б при діленні на 6 давали залишок 1. 13 % 6 = 1
    /*
	const int rows5 = 4, cols5 = 4;
    int arr5[rows5][cols5] = {};
    a = 0;
    for (int i = 0; i < rows5; i++)
    {
        for (int j = 0; j < cols5; j++)
        {
            arr5[i][j] = 1 + rand() % 20;
            cout << setw(5) << arr5[i][j];
            if (arr5[i][j] % 6 == 1) a++;
        }
        cout << " |" << endl;
    }
    cout << "=====================#" << endl;
    cout << "elements with remainder 1 when divided by 6: " << a << endl;
    */


    // 8. Дано масив розміром 5хб цілого типу.Знайти мінімальний елемент.
    // 9. Дано масив розміром 5×6 цілого типу.Знайти максимальний елемент.
    /*
    const int rows6 = 5, cols6 = 6;
    int arr6[rows6][cols6] = {};
    for (int i = 0; i < rows6; i++)
    {
        for (int j = 0; j < cols6; j++)
        {
            arr6[i][j] = 1 + rand() % 100;
            cout << setw(5) << arr6[i][j];
            if (i == 0 && j == 0) {
                max = arr6[i][j];
                min = arr6[i][j];
            }
            else {
                if (arr6[i][j] > max) max = arr6[i][j];
                if (arr6[i][j] < min) min = arr6[i][j];
            }
        }
        cout << " |" << endl;
    }
	cout << "===============================#" << endl;
	cout << "Max element: " << max << endl;
	cout << "Min element: " << min << endl;
    */

    // 10. Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
    // Визначити суму всіх від’ємних елементів.
    /*
    const int rows7 = 5, cols7 = 4;
    int arr7[rows7][cols7] = {};
    a = 0;
    for (int i = 0; i < rows7; i++)
    {
        for (int j = 0; j < cols7; j++)
        {
            arr7[i][j] = -10 + rand() % 20;
            cout << setw(5) << arr7[i][j];
            if (arr7[i][j] < 0) a++;
        }
        cout << " |" << endl;
    }
	cout << "=====================#" << endl;
	cout << "Sum of negative elements: " << a << endl;
    */

}
