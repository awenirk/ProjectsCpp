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
        max1, max2, max3, max4, max5, max6, max7, max8, max9, max0;

    int arr1[N][N], arr2[N][N], arr3[N][N], arr4[N][N], arr5[N][N],
        arr6[N][N], arr7[N][N], arr8[N][N], arr9[N][N], arr0[N][N];


    cout << "\tPattern 1:" << endl;
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j) arr1[i][j] = 1 + rand() % 256;
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
    cout << "==================================#" << endl;
    cout << "Min element in 1 pattern: " << min1 << endl;
    cout << "Max element in 1 pattern: " << max1 << endl;



    
    cout << endl << "\tPattern 2:" << endl;
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= j) arr2[i][j] = 1 + rand() % 256;
            else arr2[i][j] = 0;

            cout << setw(5) << arr2[i][j];

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
    cout << "Min element in 2 pattern: " << min2 << endl;
    cout << "Max element in 2 pattern: " << max2 << endl;
    /*
    cout << endl << "Pattern 3:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i <= j && i + j < N)
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

    cout << endl << "Pattern 4:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j && i + j >= N - 1)
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
