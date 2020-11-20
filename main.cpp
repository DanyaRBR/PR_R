// Функция быстрого возведения числа в степень - бинарная

#include <iostream>
using namespace std;

double my_pow(double number, unsigned int stepen) {
    double result = 1;
    while (stepen) {
        if (stepen % 2 == 0) {
            stepen /= 2;
            number *= number;
        }
        else {
            stepen--;
            result *= number;
        }
    }
    cout << result;
    return result;
}

int main()
{
    double number;
    unsigned int stepen;
    cout << "number\n";
    cin >> number;
    cout << "stepen\n";
    cin >> stepen;
    my_pow(number, stepen);
    return 0;
}