#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

int main()
{
    int a, max, min;
    srand(time(0));
    setlocale(LC_ALL, "Ukrainian");

    /*
    for (int i = 0; i < 50; i++)
    {
        a = rand() % 100 + 1;
        cout << a << " ";
    }
    cout << endl;
    // 10 ... 90
    for (int i = 0; i < 50; i++)
    {
        a = 10 + rand() % 90;
        cout << a << " ";
    }
    cout << endl;
    // marks 8-12
    // 12 - 8 = 4     rand()&4    0-3   +8
    cout << "Marks: " << endl;
    for (int i = 0; i < 50; i++)
    {
        a = rand() % 4 + 8;
        cout << a << " ";
    }
    */
    /*
    const int size = 10;
    int arr[size] = {};
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    */
    const int rows = 10;
    const int cols = 10;
    int arr2D[rows][cols] = {};


    for (int i = 0; i < rows; i++)
    {
        max = arr2D[i][0];
        for (int j = 0; j < cols; j++)
        {
            arr2D[i][j] = rand() % 100 + 1;
            // cout << setw(5) << arr2D[i][j];   // default right alignment
            cout << left << setw(5) << arr2D[i][j];
            if (arr2D[i][j] > max) {
                max = arr2D[i][j];
            }
        }
        cout << "Max element in " << i << "row is --> " << max << " ";
        cout << endl;
    }

    int array[rows][cols] = { {}, {}, {}, };



}
