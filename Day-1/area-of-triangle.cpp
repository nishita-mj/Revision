#include<iostream>

using namespace std;

int main(){

    int base, height, area;

    cout << "Enter the value of base and height of triangle : ";
    cin >> base >> height;

    area = 0.5 *base * height;
    cout << "Area of Triangle : " << area;

    return 0;
}