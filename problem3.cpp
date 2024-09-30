#include <iostream>
using namespace std;
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    int totalSum = 0;
    for (int i = 1; i <= a; i++) {
        int digitSum = sumOfDigits(i);
        if (digitSum >= b && digitSum <= c) {
            totalSum += i;
        }
    }
    cout << totalSum << endl;

    return 0;
}
