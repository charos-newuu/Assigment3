#include <iostream>
using namespace std;

void printDigitsInReverse(int N) {
    while (N > 0) {
        cout << N % 10 << " ";
        N /= 10;
    }
    cout << endl;
}

int main() {
    int t, N;
    cout << " Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        cout << "Enter the 4 digit number: ";
        cin >> N;
        if (N == 0) {
            cout << "0" << endl;
        } else {
            printDigitsInReverse(N);
        }
    }

    return 0;
}
