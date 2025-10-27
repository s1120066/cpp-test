#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    cout << "Numbers divisible by 7 between 1 and 50: ";

    for (int i = 1; i <= 50; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum = " << sum << endl;
    return 0;
}