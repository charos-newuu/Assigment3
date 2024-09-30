#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the position (N) in the sequence: ";
    cin >> N;
    int count = 0;
    int currentNumber = 0;
    while (count < N) {
        currentNumber++;
        if (currentNumber % 3 == 0 || currentNumber % 10 == 3) {
            continue;
        }
        count++;
    }
    cout << "The number at position " << N << " is: " << currentNumber << endl;

    return 0;
}
