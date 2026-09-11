#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));

    const int N = 11;

    int min1, min2, min3, min4, min5, min6, min7, min8, min9, min0,
        max1, max2, max3, max4, max5, max6, max7, max8, max9, max0,
        elf1 = 0, elf2 = 0, elf3 = 0, elf4 = 0, elf5 = 0,
        elf6 = 0, elf7 = 0, elf8 = 0, elf9 = 0, elf0 = 0;

    int arr1[N][N], arr2[N][N], arr3[N][N], arr4[N][N], arr5[N][N],
        arr6[N][N], arr7[N][N], arr8[N][N], arr9[N][N], arr0[N][N];


    cout << "\tPattern 1: (Test 256)" << endl; // i <= j
    cout << "========================================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j) {
                arr1[i][j] = 1 + rand() % 256;
                elf1++;
            }
            else arr1[i][j] = 0;

            cout << setw(5) << arr1[i][j];

            if (i == 0 && j == 0) {
                min1 = arr1[i][j];
                max1 = arr1[i][j];
            }
            else {
                if (arr1[i][j] < min1 && i <= j) min1 = arr1[i][j];
                if (arr1[i][j] > max1 && i <= j) max1 = arr1[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "========================================================#" << endl;
    cout << "Min element in 1 pattern: " << setw(5) << min1 << " | 256"<< endl;
    cout << "Max element in 1 pattern: " << setw(5) << max1 << " | 256"<< endl;
    cout << "Elements filled: " << setw(3) << elf1 << " | 121"<< endl;


    cout << endl << "\tPattern 2:" << endl; // i >= j
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= j) {
                arr2[i][j] = 1 + rand() % 64;
                elf2++;
            }
            else arr2[i][j] = 0;

            cout << setw(3) << arr2[i][j];

            if (i == 0 && j == 0) {
                min2 = arr2[i][j];
                max2 = arr2[i][j];
            }
            else {
                if (arr2[i][j] < min2 && i >= j) min2 = arr2[i][j];
                if (arr2[i][j] > max2 && i >= j) max2 = arr2[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 2 pattern: " << setw(3) << min2 << " | 64" << endl;
    cout << "Max element in 2 pattern: " << setw(3) << max2 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf2 << " | 121" << endl;

    
    cout << endl << "\tPattern 3:" << endl; // i <= j && i + j < N
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j && i + j < N) {
                arr3[i][j] = 1 + rand() % 64;
                elf3++;
            }
            else arr3[i][j] = 0;

            cout << setw(3) << arr3[i][j];

            if (i == 0 && j == 0) {
                min3 = arr3[i][j];
                max3 = arr3[i][j];
            }
            else {
                if (arr3[i][j] < min3 && i <= j && i + j < N) min3 = arr3[i][j];
                if (arr3[i][j] > max3 && i <= j && i + j < N) max3 = arr3[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 3 pattern: " << setw(3) << min3 << " | 64" << endl;
    cout << "Max element in 3 pattern: " << setw(3) << max3 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf3 << " | 121" << endl;


    cout << endl << "\tPattern 4:" << endl; // i >= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= j && i + j >= N - 1) {
                arr4[i][j] = 1 + rand() % 64;
                elf4++;
            }
            else arr4[i][j] = 0;

            cout << setw(3) << arr4[i][j];

            if (i == 0 && j == 0) {
                min4 = arr4[i][j];
                max4 = arr4[i][j];
            }
            else {
                if (arr4[i][j] < min4 && i >= j && i + j >= N - 1) min4 = arr4[i][j];
                if (arr4[i][j] > max4 && i >= j && i + j >= N - 1) max4 = arr4[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 4 pattern: " << setw(3) << min4 << " | 64" << endl;
    cout << "Max element in 4 pattern: " << setw(3) << max4 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf4 << " | 121" << endl;



    /*
    cout << endl << "Pattern 5:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i <= j && i + j < N or i >= j && i + j >= N - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "|" << endl;
    }

    cout << endl << "Pattern 6:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j && i + j < N || i <= j && i + j >= N - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "|" << endl;
    }

    cout << endl << "Pattern 7:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j && i + j < N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "|" << endl;
    }


    cout << endl << "Pattern 8:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i <= j && i + j >= N - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "|" << endl;
    }

    cout << endl << "Pattern 9:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j <= N - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "|" << endl;
    }

    cout << endl << "Pattern 10:" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i + j > N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "|" << endl;
    }
    */


}
