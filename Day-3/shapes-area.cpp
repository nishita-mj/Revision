#include <iostream>

using namespace std;

int main(){

    float r, area;
    float pi = 3.14;
    int l, b, side, base, height, choice;

    cout << "1. Circle\n";
    cout << "2. Triangle\n";
    cout << "3. Square\n";
    cout << "4. Rectangle\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice){
    case 1:
        cout << "enter radius of circle : ";
        cin >> r;

        area = pi * r * r;
        cout << "Area of Circle = " << area;
        break;

    case 2:
        cout << "Enter the value of base and height of triangle : ";
        cin >> base >> height;

        area = 0.5 *base * height;
        cout << "Area of Triangle : " << area;
        break;

    case 3:
        cout << "Enter side of square : ";
        cin >> side;

        area = side * side;
        cout << "Area of Square = " << area;
        break;

    case 4:
        cout << "Enter the value of L and B : ";
        cin >> l >> b;

        area = l * b;
        cout << "Area of Rectangle : " << area;
        break;

    default:
        break;
    }

    return 0;
}