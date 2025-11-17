#include <iostream>
using namespace std;

double calculateBMI(double weight_kg, double height_cm) {
    double height_m = height_cm / 100.0;
    double bmi = weight_kg / (height_m * height_m);
    return bmi;
}

int main() {
    double weight1, height1;
    double weight2, height2;

    weight1 = 80;
    height1 = 174;
    weight2 = 66;
    height2 = 155;

    cout << "people one bmi is : " << calculateBMI(weight1, height1) << endl;
    cout << "people two bmi is : " << calculateBMI(weight2, height2) << endl;

    return 0;
}