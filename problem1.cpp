#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a single-digit number: ";
    cin >> a;
    for (int i = a; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << " ";
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }return 0;
}

