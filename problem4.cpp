#include <iostream>
using namespace std;

int main() {
    int apartment_number, apartments_per_floor;
    cout << " Enter Bob's apartment number and apartments per floor: ";
    cin >> apartment_number >> apartments_per_floor;
    if (apartment_number == 1 || apartment_number == 2) {
        cout << " Bob lives on the 1st floor." << endl;
    } else {
        int remaining_apartments = apartment_number - 2;
        int floor = (remaining_apartments + apartments_per_floor - 1) / apartments_per_floor + 1;
        cout << " Bob lives on floor " << floor << "." << endl;
    }

    return 0;
}

