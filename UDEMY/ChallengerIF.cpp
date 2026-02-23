#include <iostream>
using namespace std;

int main() {
    cout << "Choose three numbers: ";
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    if (number1 > number2 && number1 > number3)
    {
        cout << "The largest number is: " << number1 << endl;
    }
    else if (number2 > number1 && number2 > number3)
    {
        cout << "The largest number is: " << number2 << endl;
    }
    else if (number3 > number1 && number3 > number2)
    {
        cout << "The largest number is: " << number3 << endl;
    }
    else
    {
        cout << "There is a tie for the largest number." << endl;
    }
}
