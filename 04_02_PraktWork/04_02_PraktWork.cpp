#include <iostream>
using namespace std;

int main()
{
	// 1.Вивести на екран цілі числа від 1 до 100. - while
	/*
	cout << "\tTask 1" << endl;
	int a = 1;
	while (a <= 100)
	{
		cout << a << " ";
		a++;
	}
	cout << endl;
	*/

	// 2.Вивести на екран додатні парні числа, які не перевищують 200, та їх кількість. - while
	/*
	cout << "\tTask 2" << endl;
	int b = 1;
	int count = 0;
	while (b <= 200)
	{
		if ((b % 2) == 0)
		{
			count++;
			cout << b << " ";
		}
		b++;
	}
	cout << endl;
	cout << "Count of even numbers: " << count << endl;
	*/

	// 3.Дано N(N > 0).Вводяться N чисел.Знайти суму парних серед цих чисел. - while
	/*
	cout << "\tTask 3" << endl;
	int N, num, suma = 0;
	cout << "Enter N: "; cin >> N;

	while (N > 0)
	{
		cout << "Enter your num: "; cin >> num;
		if ((num % 2) == 0)
		{
			suma += num;
		}
		num++;
		N--;
	}
	cout << "Summ of even: " << suma << endl;
	*/


	// 4. Годинник б, є щогодини стільки разів, скільки зараз годин.
	// Написати програму, яка підрахує, скільки разів проб, є годинник за 12 годин. for
	/*
	cout << "\tTask 4" << endl;
	int count = 0;
	for (int i = 1; i <= 12; i++) {
		count += i; }
	cout << "Clock strike: " << count << " times" << endl;
	*/


	// 5. Користувач з клавіатури послідовно вводить цілі числа.
	// Щойно користувач ввів 0, необхідно показати на екрані суму всіх введених чисел. for
	/*
	cout << "\tTask 5" << endl;
	int sum = 0, i;
	cout << "Enter 0 to exit." << endl;
	for (;;)
	{
		cout << "Enter i: "; cin >> i;
		if (i != 0) {
			sum += i;
		}
		else {
			break;
		}
	}
	cout << "Your umbers sum: " << sum << endl;
	*/

}