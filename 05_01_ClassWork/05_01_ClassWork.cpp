#include <iostream>
using namespace std;

int main() // Include cycles
{
    /*
    for (int i = 1; i <= 7; i++)
    {
        cout << i << ". ";
        for (int j = 0; j < 10; j++)
        {
            cout << "|###|";
        }
        cout << endl;
	}
    cout << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
		cout << "\n---------------------\n" << endl;
    }
    cout << endl;
    for (int x = 1; x <= 10; x++)
    {
        for (int y = 1; y <= 10; y++)
        {
            cout << "* ";
		}
        cout << endl;
    }
    cout << endl;

    int starLines = 1, countStar, lenght = 10;
    while (starLines <= lenght)
    {
        countStar = 1;
        while (countStar <= lenght)
        {
            cout << "* ";
            countStar++;
		}
        cout << endl;
        starLines++;
    }
    */


    int N = 11;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i >= j && i + j > N) {
                cout << "|===|";
            }
            else {
				cout << "     ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << "|###|";
        }
        cout << endl;
    }
    cout << endl;


}



