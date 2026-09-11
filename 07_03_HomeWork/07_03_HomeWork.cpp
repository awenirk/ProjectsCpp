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


    cout << endl << "\tPattern 5:" << endl; // i <= j && i + j < N or i >= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j && i + j < N or i >= j && i + j >= N - 1) {
                arr5[i][j] = 1 + rand() % 64;
                elf5++;
            }
            else arr5[i][j] = 0;

            cout << setw(3) << arr5[i][j];

            if (i == 0 && j == 0) {
                min5 = arr5[i][j];
                max5 = arr5[i][j];
            }
            else {
                if (arr5[i][j] < min5 && i <= j && i + j < N or i >= j && i + j >= N - 1) min5 = arr5[i][j];
                if (arr5[i][j] > max5 && i <= j && i + j < N or i >= j && i + j >= N - 1) max5 = arr5[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 5 pattern: " << setw(3) << min5 << " | 64" << endl;
    cout << "Max element in 5 pattern: " << setw(3) << max5 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf5 << " | 121" << endl;


    cout << endl << "\tPattern 6:" << endl; // j && i + j < N || i <= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j && i + j < N || i <= j && i + j >= N - 1) {
                arr6[i][j] = 1 + rand() % 64;
                elf6++;
            }
            else arr6[i][j] = 0;

            cout << setw(3) << arr6[i][j];

            if (i == 0 && j == 0) {
                min6 = arr6[i][j];
                max6 = arr6[i][j];
            }
            else {
                if (arr6[i][j] < min6 && j && i + j < N || i <= j && i + j >= N - 1) min6 = arr6[i][j];
                if (arr6[i][j] > max6 && j && i + j < N || i <= j && i + j >= N - 1) max6 = arr6[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 6 pattern: " << setw(3) << min6 << " | 64" << endl;
    cout << "Max element in 6 pattern: " << setw(3) << max6 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf6 << " | 121" << endl;


    cout << endl << "\tPattern 7:" << endl; // i >= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= j && i + j < N) {
                arr7[i][j] = 1 + rand() % 64;
                elf7++;
            }
            else arr7[i][j] = 0;

            cout << setw(3) << arr7[i][j];

            if (i == 0 && j == 0) {
                min7 = arr7[i][j];
                max7 = arr7[i][j];
            }
            else {
                if (arr7[i][j] < min7 && i >= j && i + j < N) min7 = arr7[i][j];
                if (arr7[i][j] > max7 && i >= j && i + j < N) max7 = arr7[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 7 pattern: " << setw(3) << min7 << " | 64" << endl;
    cout << "Max element in 7 pattern: " << setw(3) << max7 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf7 << " | 121" << endl;


    cout << endl << "\tPattern 8:" << endl; // i >= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j && i + j >= N - 1) {
                arr8[i][j] = 1 + rand() % 64;
                elf8++;
            }
            else arr8[i][j] = 0;

            cout << setw(3) << arr8[i][j];

            if (i == 0 && j == 0) {
                min8 = arr8[i][j];
                max8 = arr8[i][j];
            }
            else {
                if (arr8[i][j] < min8 && i <= j && i + j >= N - 1) min8 = arr8[i][j];
                if (arr8[i][j] > max8 && i <= j && i + j >= N - 1) max8 = arr8[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 8 pattern: " << setw(3) << min8 << " | 64" << endl;
    cout << "Max element in 8 pattern: " << setw(3) << max8 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf8 << " | 121" << endl;


    cout << endl << "\tPattern 9:" << endl; // i >= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j <= N - 1) {
                arr9[i][j] = 1 + rand() % 64;
                elf9++;
            }
            else arr9[i][j] = 0;

            cout << setw(3) << arr9[i][j];

            if (i == 0 && j == 0) {
                min9 = arr9[i][j];
                max9 = arr9[i][j];
            }
            else {
                if (arr9[i][j] < min9 && i + j <= N - 1) min9 = arr9[i][j];
                if (arr9[i][j] > max9 && i + j <= N - 1) max9 = arr9[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in 9 pattern: " << setw(3) << min9 << " | 64" << endl;
    cout << "Max element in 9 pattern: " << setw(3) << max9 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf9 << " | 121" << endl;


    cout << endl << "\tPattern 0:" << endl; // i >= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j > N) {
                arr0[i][j] = 1 + rand() % 64;
                elf0++;
            }
            else arr0[i][j] = 0;

            cout << setw(3) << arr0[i][j];

            if (i == 0 && j == 0) {
                min0 = arr0[i][j];
                max0 = arr0[i][j];
            }
            else {
                if (arr0[i][j] < min0 && i + j > N) min0 = arr0[i][j];
                if (arr0[i][j] > max0 && i + j > N) max0 = arr0[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl; 
    cout << "Min element in 0 pattern: " << setw(3) << min0 << " | 64" << endl;
    cout << "Max element in 0 pattern: " << setw(3) << max0 << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elf0 << " | 121" << endl;


    // 1 --> i <= j
    // 2 --> i >= j
    // 3 --> i <= j && i + j < N
    // 4 --> i >= j && i + j >= N - 1
    // 5 --> i <= j && i + j < N or i >= j && i + j >= N - 1
    // 6 --> i >= j && i + j < N || i <= j && i + j >= N - 1
    // 7 --> i >= j && i + j < N
    // 8 --> i <= j && i + j >= N - 1
    // 9 --> i + j <= N - 1
    // 0 --> i + j > N



    // My tamplate: (Мій шаблон)
    /*
    cout << endl << "\tPattern MMM:" << endl; // i >= j && i + j >= N - 1
    cout << "==================================#" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (FORMULA) {
                arrMMM[i][j] = 1 + rand() % 64;
                elfMMM++;
            }
            else arrMMM[i][j] = 0;
    
            cout << setw(3) << arrMMM[i][j];
    
            if (i == 0 && j == 0) {
                minMMM = arrMMM[i][j];
                maxMMM = arrMMM[i][j];
            }
            else {
                if (arrMMM[i][j] < minMMM && FORMULA) minMMM = arrMMM[i][j];
                if (arrMMM[i][j] > maxMMM && FORMULA) maxMMM = arrMMM[i][j];
            }
        }
        cout << " |" << endl;
    }
    cout << "==================================#" << endl;
    cout << "Min element in MMM pattern: " << setw(3) << minMMM << " | 64" << endl;
    cout << "Max element in MMM pattern: " << setw(3) << maxMMM << " | 64" << endl;
    cout << "Elements filled: " << setw(3) << elfMMM << " | 121" << endl;
    */

}
