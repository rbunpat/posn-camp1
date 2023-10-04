#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // int width, height, area;
    // cout << "Enter width: ";
    // cin >> width;
    // cout << "Enter height: ";
    // cin >> height;
    // area = width * height;
    // cout << "Area is: " << area << endl;
    //calculate the bmi
    double weight, height, bmi;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Enter your height: ";
    cin >> height;
    height = height / 100;
    bmi = weight / (height * height);
    cout << "Hi : " << name << "BMI = " << bmi << endl;
    // int x, y, z;
    // cin >> x >> y >> z;
    // cout << x * (2 + 5) << endl;
    // int number, num2;
    // cout << "Input a number: ";
    // cin >> number;
    // cout << "Input another number: ";
    // cin >> num2;
    // cout << "output is " << number;
    // cout << "number2 is " << num2 << endl;
    //add up to 70

    // int x = 8, y = 9, z = 2;

    // cout << 2 + 8 * 9 << endl;
    return 0;
}
