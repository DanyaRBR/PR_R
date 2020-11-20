#include <iostream>
using namespace std;

double my_pow(double number, unsigned int stepen) {
    double result = 1;
     for (int i = 0; i < stepen; i++) {
            result = result * number;
        }
        cout << "result = " << result;
        return result;
}

int main()
{
    double number;
    unsigned int stepen;
    cout << "Enter number";
    cin >> number;
    cout << "Enter stepen";
    cin >> stepen;

    my_pow(number, stepen);
}
