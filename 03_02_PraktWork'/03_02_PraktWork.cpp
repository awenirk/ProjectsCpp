#include <iostream>
using namespace std;

int main()
{
	// 1. Дано країна.Вивести назву столиці. (5 countries)
	/*
	cout << "\tTask 1" << endl;
	char country;
	cout << "C- Canada\nU- Ukraine\nJ- Japan\nB- Brazil\nI- India" << endl;
	cout << "Enter a country code: "; cin >> country;
	*/

	// if else Edition:
	/*
	if (country == 'C' || country == 'c') {
		cout << "The capital of Canada is Ottawa." << endl;
	}
	else if (country == 'U' || country == 'u') {
		cout << "The capital of Ukraine is Kyiv." << endl;
	}
	else if (country == 'J' || country == 'j') {
		cout << "The capital of Japan is Tokyo." << endl;
	}
	else if (country == 'B' || country == 'b') {
		cout << "The capital of Brazil is Brasília." << endl;
	}
	else if (country == 'I' || country == 'i') {
		cout << "The capital of India is New Delhi." << endl;
	}
	else {
		cout << "Invalid country code." << endl;
	}*/

	// Switch Edition:
	/*
	switch (country)
	{
	case 'C': case 'c':
		cout << "The capital of Canada is Ottawa." << endl;
		break;
	case 'U': case 'u':
		cout << "The capital of Ukraine is Kyiv." << endl;
		break;
	case 'J': case 'j':
		cout << "The capital of Japan is Tokyo." << endl;
		break;
	case 'B': case 'b':
		cout << "The capital of Brazil is Brasília." << endl;
		break;
	case 'I': case 'i':
		cout << "The capital of India is New Delhi." << endl;
		break;
	default:
		cout << "Error~" << endl;
		break;
	}
	*/



	// 2. Дано номер дня тижня(1 – понеділок і т.д.).Визначити чи це вихідний день.
	/*
	cout << "\tTask 2" << endl;
	int DayOfWeek;
	cout << "Enter the day of the week (1-7): "; cin >> DayOfWeek;
	*/

	// if else Edition:
	/*
	if (DayOfWeek >= 1 && DayOfWeek <= 5) {
		cout << "It's a weekday." << endl;
	}
	else if (DayOfWeek == 6 || DayOfWeek == 7) {
		cout << "It's a weekend." << endl;
	}
	else {
		cout << "Invalid day of the week." << endl;
	}
	*/

	// Switch Edition:
	/*
	switch (DayOfWeek)
	{
	case 1: case 2: case 3: case 4: case 5:
		cout << "It's a weekday." << endl;
		break;
	case 6: case 7:
		cout << "It's a weekend." << endl;
		break;
	default:
		cout << "Invalid day of the week." << endl;
		break;
	}
	*/



	// 3. Дано курс корабля(північ, південь, захід, схід).
	// Як зміниться курс корабля після команди «назад» ?
	/*
	cout << "\tTask 3" << endl;
	char direction;
	cout << "n - North" << endl;
	cout << "s - South" << endl;
	cout << "w - West" << endl;
	cout << "e - East" << endl;
	cout << "Enter the direction: "; cin >> direction;
	*/

	// if else Edition:
	/*
	if (direction == 'n') {
		cout << "Your choice: North" << endl;
		cout << "Reverse direction is: South" << endl;
	}
	else if (direction == 's') {
		cout << "Your choice: South" << endl;
		cout << "Reverse direction is: North" << endl;
	}
	else if (direction == 'w') {
		cout << "Your choice: West" << endl;
		cout << "Reverse direction is: East" << endl;
	}
	else if (direction == 'e') {
		cout << "Your choice: East" << endl;
		cout << "Reverse direction is: West" << endl;
	}
	else {
		cout << "Error!" << endl;
	}
	*/

	// Switch Edition:
	/*
	switch (direction)
	{
	case 'n':
		cout << "Your choice: North" << endl;
		cout << "Reverse direction is: South" << endl;
		break;
	case 's':
		cout << "Your choice: South" << endl;
		cout << "Reverse direction is: North" << endl;
		break;
	case 'w':
		cout << "Your choice: West" << endl;
		cout << "Reverse direction is: East" << endl;
		break;
	case 'e':
		cout << "Your choice: East" << endl;
		cout << "Reverse direction is: West" << endl;
		break;
	default:
		cout << "Error!" << endl;
		break;
	}
	*/



	// 4.Дано тварина(номер тварини. 1 – жираф. 2 – орел.тощо). (7 animals)
	// Вивести клас, до якого відноситься тварина(хижак, травоїдна).
	/*
	cout << "\tTask 4" << endl;
	int animal;
	cout << "1.Giraffe\n2.Lion\n3.Rabbit\n4.Eagle\n5.Elephant\n6.Tiger\n7.Cow" << endl;
	cout << "Enter number of animal (1-7): "; cin >> animal;
	*/

	// if else Edition:
	/*
	if (animal == 1 || animal == 3 || animal == 5 || animal == 7) {
		cout << "Your animal is Herbivore" << endl;
	}
	else if (animal == 2 || animal == 4 || animal == 6) {
		cout << "Your animal is Predator" << endl;
	}
	else {
		cout << "Error!";
	}
	*/

	// Switch Edition:
	/*
	switch (animal)
	{
	case 1: case 3: case 5: case 7:
		cout << "Your animal is Herbivore" << endl;
		break;
	case 2: case 4: case 6:
		cout << "Your animal is Predator" << endl;
	default:
		cout << "Error!";
		break;
	}
	*/

}