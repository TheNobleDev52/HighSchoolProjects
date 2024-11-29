#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {  // skip even numbers
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int a, b;
    cout << "Enter the lower and upper bounds: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Invalid input: lower bound is greater than upper bound!" << endl;
        return 1;  // return error code
    }
    cout << "Prime numbers between " << a << " and " << b << " are: ";
    for (int i = max(a, 2); i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}