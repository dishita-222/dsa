#include <iostream>

using namespace std;

int countdigits(int x) {
    int res = 0;
    while (x > 0) {
        x = x / 10;
        res++;
    }
    return res;
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    int num_digits = countdigits(x);
    cout << "The number of digits in " << x << " is: " << num_digits << endl;
    return 0;
}
