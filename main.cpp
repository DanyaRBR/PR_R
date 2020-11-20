#include <iostream>
using namespace std;

double my_pow(double number, int stepen) {
    double result = 1;
    if (stepen < 0) {
        stepen = -stepen;
        for (int i = 0; i < stepen; i++) {
            result *= number;
        }

        cout << 1 / result;
    }
    else {
        for (int i = 0; i < stepen; i++) {
            result = result * number;
        }
        cout << "result = " << result;
        return result;
    }
}


int main()
{
    double number;
    int stepen;
    cout << "Enter number";
    cin >> number;
    cout << "Enter stepen";
    cin >> stepen;

    my_pow(number, stepen);
}
