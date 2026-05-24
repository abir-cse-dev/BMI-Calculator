#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int weight;
    int height;
    cout << "enter your weight: (Kg)";
    cin >> weight;
    cout << "enter your height: (inch)";
    cin >> height;
    float heightconv = height*2.54/100;
    float BMI = weight/heightconv/heightconv;
    cout << "Your BMI is: " << BMI << endl;
    return 0;
}
