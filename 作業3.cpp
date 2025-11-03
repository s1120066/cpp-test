#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            cout << i << " x " << j << " = " << i * j << "\t";
            j++;
        }
        cout << endl; // 換行，完成一列
        i++;
    }
    return 0;
}