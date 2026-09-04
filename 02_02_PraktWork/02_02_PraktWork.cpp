#include <iostream>
using namespace std;

int main()
{
    // Task 3
    const float OneInchInCm = 2.54;
    int diagonal;
    int diagonalInCm;

    cout << "Enter the diagonal of the TV in inches: ";
    cin >> diagonal;
    diagonalInCm = diagonal * OneInchInCm;
    cout << "Diagonal of the TV in centimeters: " << diagonalInCm << " cm" << endl;

    // Task 4
    const int days = 3;
    int needMeal;
    int EatInOneDay;
    cout << "Enter usage meal in one day: ";
    cin >> EatInOneDay;
    needMeal = EatInOneDay * days;
    cout << "In " << days << " days meal usage -> " << needMeal << endl;
}
