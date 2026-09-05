#include <iostream>
using namespace std;


int main()
{
	//1.Дано сторони прямокутника.Визначити чи прямокутник є квадратом.
	/*
	cout << "\tTask 1" << endl;
	int a, b;
	cout << "Enter b: "; cin >> b;
	cout << "Enter a: "; cin >> a;
	if (a == b) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	*/


	// 2.Дано вік дитини.Виначити чи дитина по віку може
	// навчатися у школі, чи може відвідувати дитсадок і т.і.
	/*
	cout << "\tTask 2" << endl;
	int age;
	cout << "Enter child`s age: "; cin >> age;
	if (age >= 3 && age <= 5) {
		cout << "The child can attend kindergarten!" << endl;
	}
	else if (age >= 6 && age <= 17) {
		cout << "The child can attend school!" << endl;
	}
	else if (age >= 18) {
		cout << "The child is already an adult!";
	}
	else {
		cout << "The child is too young!";
	}
	*/

	// 3.Дано 3 числа.Визначити чи рівно два серед них від’ємні.
	/*
	cout << "\tTask 3" << endl;
	int num1, num2, num3;
	cout << "Enter num 1: "; cin >> num1;
	cout << "Enter num 2: "; cin >> num2;
	cout << "Enter num 3: "; cin >> num3;
	if ((num1 < 0 && num2 < 0 && num3 >= 0) ||
		(num2 < 0 && num3 < 0 && num1 >= 0) ||
		(num3 < 0 && num1 < 0 && num2 >= 0))
	{
		cout << "2 nums is negative!" << endl;
	}
	*/

	// 4.Дано число.Визначити чи належить воно відрізку[2, 5] або[-1, 1].
	/*
	cout << "\tTask 4" << endl;
	int someNum;
	cout << "Enter some num: "; cin >> someNum;
	if (someNum == 2 || someNum == 3 || someNum == 4 || someNum == 5)
	{
		cout << "In first range!";
	}
	else if (someNum == -1 || someNum == 1)
	{
		cout << "In second range!";
	}
	*/

	// 5.Дано три числа. Визначити чи тільки два з них рівні між собою.
	/*
	cout << "\tTask 5" << endl;
	int num4, num5, num6;
	cout << "Enter num 1: "; cin >> num4;
	cout << "Enter num 2: "; cin >> num5;
	cout << "Enter num 3: "; cin >> num6;
	if ((num4 == num5 && num6 != num4) ||
		(num5 == num6 && num4 != num5) ||
		(num6 == num4 && num5 != num6))
	{
		cout << "Yes!" << endl;
	}
	*/

	// 6.Дано 3 числа.Визначити чи всі числа непарні.Числа вводяться з клавіатури
	/*
	cout << "\tTask 6" << endl;
	int num7, num8, num9;
	cout << "Enter num 1: "; cin >> num7;
	cout << "Enter num 2: "; cin >> num8;
	cout << "Enter num 3: "; cin >> num9;
	if (num7 % 2 != 0 && num8 % 2 != 0 && num9 % 2 != 0)
	{
		cout << "Every number odd!";
	}
	*/



	//На додаткові 12 балів(за бажанням) :

	//	7.Дано два числа.Якщо вони різні, то поміняти іх місцями.
	/*
	cout << "\tTask 7" << endl;
	int num10, num11, temp;
	cout << "Enter num 1: "; cin >> num10;
	cout << "Enter num 2: "; cin >> num11;
	if (num10 != num11) {
		temp = num10;
		num10 = num11;
		num11 = temp;
	}
	cout << "Num 1: " << num10 << endl;
	cout << "Num 2: " << num11 << endl;
	*/

	// 8.Дано натуральне число а(а > 100 && a < 999).Напишіть програму, що визначає кількість цифр в цьому числі,
	//	суму його цифр, і яка виводить на екран першу и останню цифру через два пропуски.
	//	777 = 3 числа, сума, сума = 21
	/*
	cout << "\tTask 8" << endl;
	int NumA;
	cout << "Enter numA (>100 & <999): "; cin >> NumA;
	int first = NumA / 100;
	int last = NumA % 10;
	int middle = (NumA / 10) % 10;
	int sum = first + middle + last;
	cout << "Number of digits: 3" << endl;
	cout << "Sum: " << sum << endl;
	cout << first << "  " << last << endl;
	*/

	// 9.Дано час(години, хвилини, секунди).Визначити чи час допустимий(наприклад, 25.61.60 – недопустимий).
	/*
	cout << "\tTask 9" << endl;
	int sec, min, hour;
	cout << "Enter hours: " << endl; cin >> hour;
	cout << "Enter minutes: " << endl; cin >> min;
	cout << "Enter seconds: " << endl; cin >> sec;
	if (hour > 24 || hour < 0) {
		cout << "Invalid hours!";
	}
	else if (min > 60 || min < 0) {
		cout << "Invalid minutes!";
	}
	else if (sec > 60 || sec < 0) {
		cout << "Invalid seconds!";
	}
	else {
		cout << "Good time!" << endl;
	}
	*/


	// 10.Написати програму яка в залежності від введеної години виводить : good night, good day, good evening, good morning.
	/*
	cout << "\tTask 10" << endl;
	int Hours;
	cout << "Enter Hours: "; cin >> Hours;
	if (Hours >= 0 && Hours < 6) {
		cout << "Good Night!";
	}
	else if (Hours >= 6 && Hours < 12) {
		cout << "Good morning!";
	}
	else if (Hours >= 12 && Hours < 18) {
		cout << "Good day!";
	}
	else if (Hours >= 18 && Hours < 24) {
		cout << "Good evening!";
	}
	*/


	// 11.Написати програму, яка обчислює та виводить мінімум з трьох введених користувачем чисел
	/*
	cout << "\tTask 11" << endl;
	int nums1, nums2, nums3;
	cout << "Enter 1 num: "; cin >> nums1;
	cout << "Enter 2 num: "; cin >> nums2;
	cout << "Enter 3 num: "; cin >> nums3;
	if (nums1 < nums2 && nums1 < nums3) {
		cout << "The smallest number is --> " << nums1 << endl;
	}
	else if (nums2 < nums1 && nums2 < nums3) {
		cout << "The smallest number is --> " << nums2 << endl;
	}
	else if (nums3 < nums1 && nums3 < num2) {
		cout << "The smallest number is --> " << nums3 << endl;
	}
	else if (nums1 == nums2 && nums1 < nums3) {
		cout << "The smallest number is --> " << nums1, nums2 << endl;
	}
	else if (nums2 == nums3 && nums2 < nums1) {
		cout << "The smallest number is --> " << nums2, nums3 << endl;
	}
	else if (nums3 == nums1 && nums3 < nums2) {
		cout << "The smallest number is --> " << nums1, nums3 << endl;
	}
	else {
		cout << "Some nums are equals" << endl;
	}
	*/
}