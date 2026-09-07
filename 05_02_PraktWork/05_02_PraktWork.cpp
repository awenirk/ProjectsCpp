#include <iostream>
using namespace std;

int main()
{
    int N = 10;

    cout << endl << "Pattern 1:" << endl;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i <= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
		}
		cout << endl;
    }

    cout << endl << "Pattern 2:" << endl;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
		}
		cout << endl;
    }

    cout << endl << "Pattern 3:" << endl;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i <= j && i+j <= N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
		}
		cout << endl;
    }

    cout << endl << "Pattern 4:" << endl;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i >= j && i+j >= N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
		}
		cout << endl;
    }

    cout << endl << "Pattern 5:" << endl;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i >= j && i+j >= N or i <= j && i + j <= N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
		}
		cout << endl;
    }

    cout << endl << "Pattern 6:" << endl;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i <= j && i + j >= N or i >= j && i + j <= N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl << "Pattern 7:" << endl;
    for (int i =01; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i >= j && i + j <= N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }


    cout << endl << "Pattern 8:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i <= j && i + j >= N-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl << "Pattern 9:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j <= N-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
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
        cout << endl;
    }

    

}
